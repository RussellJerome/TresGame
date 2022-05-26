#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex311_KBRideCircleBlizzard.generated.h"

class ATresProjectileBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack6_e_ex311_KBRideCircleBlizzard : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TrailParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KBMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_shotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_IsReverseRotation: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_IsNotTurn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_IsTargetRotation: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetToRot;
    
public:
    UTresAttack6_e_ex311_KBRideCircleBlizzard();
};

