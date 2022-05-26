#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyPawn_e_ex313.generated.h"

class ATresProjectileGenerator_e_ex313_DarkMine;
class ATresEnemyXIIIAManager;
class ATresProjectileGenerator_e_ex313_DarkHand_Thunder;
class UParticleSystem;
class UParticleSystemComponent;
class USoundBase;

UCLASS()
class ATresEnemyPawn_e_ex313 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_bAura;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex313_DarkMine> m_pro_DarkMineGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex313_DarkHand_Thunder> m_pro_DarkHand_ThunderGeneratorClass;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_PartnerDead;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_TestPartnerDead;
    
protected:
    UPROPERTY()
    ATresProjectileGenerator_e_ex313_DarkMine* m_DarkMineManager;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_KabutowariDecalEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_KabutowariDecalEff;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_DarkBiteVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_DarkBiteCoopVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RevengeVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyXIIIAManager> m_pro_XIIIAManagerClass;
    
protected:
    UPROPERTY()
    ATresEnemyXIIIAManager* m_XIIIAManager;
    
public:
    ATresEnemyPawn_e_ex313();
protected:
    UFUNCTION(BlueprintCallable)
    bool IsThunderGenerator();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPartnerDead();
    
    UFUNCTION(Exec)
    bool IsDuringDarkMineCooldown();
    
    UFUNCTION(Exec)
    bool IsDuringDarkAuraKabutowariCooldown();
    
    UFUNCTION(Exec)
    bool CanUseDarkAuraKabutowari();
    
};

