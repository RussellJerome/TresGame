#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex046_BlizzardBreath.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;
class ATresSplineParticleActor;

UCLASS(HideDropdown)
class UTresAttack1_e_ex046_BlizzardBreath : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BeamProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeamTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeamSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SplineNumber;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresSplineParticleActor> m_BeamSplineParticleClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_IcicleProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IcicleSpawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IcicleSpawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LookAtBoneName;
    
public:
    UTresAttack1_e_ex046_BlizzardBreath();
};

