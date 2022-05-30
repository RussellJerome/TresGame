#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "TresEnemyEx361CounterAfterActionPeriodInfo.h"
#include "ETresStateID.h"
#include "TresEnemyPawn_e_ex361.generated.h"

class USoundBase;
class ATresProjectileGenerator_e_ex361_DarkHand_Thunder;
class ATresProjectileGenerator_e_ex361_DarkMine;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyPawn_e_ex361 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_bAura;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex361_DarkMine> m_pro_DarkMineGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex361_DarkHand_Thunder> m_pro_DarkHand_ThunderGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_pro_bTestDeleteThunder: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx361CounterAfterActionPeriodInfo> m_AfterActionPeriod;
    
protected:
    UPROPERTY()
    ATresProjectileGenerator_e_ex361_DarkMine* m_DarkMineManager;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_KabutowariDecalEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_KabutowariDecalEff;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_DarkBiteVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RevengeVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
public:
    ATresEnemyPawn_e_ex361();
    UFUNCTION()
    void OnDtorStateCallBack(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateCallBack(TEnumAsByte<ETresStateID> inStateID);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsThunderGenerator();
    
public:
    UFUNCTION()
    bool IsHitCounterAttack();
    
    UFUNCTION()
    bool IsCounterSuccess();
    
    UFUNCTION(BlueprintCallable)
    float GetWarpAngle();
    
    UFUNCTION(BlueprintCallable)
    void BP_FinishDarkAura();
    
    UFUNCTION(BlueprintCallable)
    void BP_EndMasterLight();
    
};

