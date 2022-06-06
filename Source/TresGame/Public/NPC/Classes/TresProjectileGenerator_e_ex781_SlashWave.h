#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresE_EX781BreakSlashPatternWaveParam.h"
#include "TresProjectileGenerator_e_ex781_SlashWave.generated.h"

class UParticleSystem;
class ATresProjectileBase;
class ATresCharPawnBase;
class UParticleSystemComponent;

UCLASS()
class ATresProjectileGenerator_e_ex781_SlashWave : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FinishParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GrandSlashParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SignIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresProjectileBase>> m_BulletProjectileList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_EX781BreakSlashPatternWaveParam> m_SlashPatternParam;
    
private:
    UPROPERTY()
    ATresCharPawnBase* m_MyTarget;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SignParticle;
    
public:
    ATresProjectileGenerator_e_ex781_SlashWave();
};

