#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "Tresex301AscensionPillarPatternParam.h"
#include "TresAttack15_e_ex301_PillarAttack.generated.h"

class ATresProjectileBase;
class USoundBase;
class UParticleSystem;

UCLASS()
class UTresAttack15_e_ex301_PillarAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<ATresProjectileBase>> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresex301AscensionPillarPatternParam> m_AscensionPillarPatternParam;
    
    UPROPERTY(EditAnywhere)
    bool m_IsWarpParam;
    
    UPROPERTY(EditAnywhere)
    float m_ShotWaitTimeParam;
    
    UPROPERTY(EditAnywhere)
    float m_ShotAfterTimeParam;
    
    UPROPERTY(EditAnywhere)
    int32 m_ShotCountParam;
    
    UPROPERTY(EditAnywhere)
    float m_ShotIntervalTImeParam;
    
    UPROPERTY(EditAnywhere)
    float m_ShotBulletIntervalTImeParam;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AttackEffctData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditAnywhere)
    float m_PillarAtkAfterHigh;
    
public:
    UTresAttack15_e_ex301_PillarAttack();
};

