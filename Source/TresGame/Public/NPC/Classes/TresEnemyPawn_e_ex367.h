#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex367.generated.h"

class UTresStateBase;
class ATresEnemyPawn_e_ex367;
class ATresProjectileBase;
class UParticleSystem;
class ATresCharPawnBase;
class ATresEnemyPawn_e_ex367_Ascension;
class UParticleSystemComponent;
class UBehaviorTree;

UCLASS()
class ATresEnemyPawn_e_ex367 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyXIIILPawnBase> m_Avatar;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<ATresProjectileBase>> m_SwordWaveProjectileList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SwordWaveSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpOutEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpParticleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SwordParticleEffData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_AscensionAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_CallXIIIAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_XIIIAttack;
    
    UPROPERTY(EditAnywhere)
    float m_BattleeAreaRange;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_MapCenterPos;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex367_Ascension> m_AscensionObjectData;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex367* m_pAvaterPawn[13];
    
    UPROPERTY()
    ATresCharPawnBase* m_AttackedChar;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SwordParticleEff;
    
    UPROPERTY()
    ATresProjectileBase* m_CheckPillarProj;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_WarpOutEff;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex367_Ascension* m_AscensionObject;
    
    UPROPERTY()
    UBehaviorTree* m_DefaultBehavior;
    
public:
    ATresEnemyPawn_e_ex367();
    UFUNCTION(BlueprintCallable)
    bool IsXIIIAttackMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsShowCharacter();
    
    UFUNCTION(BlueprintCallable)
    bool IsAvatar();
    
    UFUNCTION(BlueprintCallable)
    bool IsAscensionMode();
    
    UFUNCTION(BlueprintCallable)
    bool InBattleField();
    
    UFUNCTION(BlueprintCallable)
    void BP_ChangeGoatMagicCircle();
    
};

