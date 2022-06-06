#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "FireTurnTypes_e_ex047.h"
#include "TresAttack1_e_ex047_Fire.generated.h"

class ATresProjectileBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack1_e_ex047_Fire : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AttackProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FireTurnParticle;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<FireTurnTypes_e_ex047> m_FireTurnType;
    
    UPROPERTY(EditAnywhere)
    float m_ShotPitchDegree;
    
    UPROPERTY(EditAnywhere)
    float m_ShotRollDegree;
    
    UPROPERTY(EditAnywhere)
    float m_PitchVariationDegree;
    
    UPROPERTY(EditAnywhere)
    float m_RollVariationDegree;
    
    UPROPERTY(EditAnywhere)
    float m_shotInterval;
    
    UPROPERTY(EditAnywhere)
    float m_OnceTurnInitialSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_OnceTurnInterval;
    
    UPROPERTY(EditAnywhere)
    float m_TwiceTurnInitialSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_TwiceTurnInterval;
    
    UPROPERTY(EditAnywhere)
    int32 m_TurnCountMax;
    
    UPROPERTY(EditAnywhere)
    float m_TurnFireTargetPos;
    
    UPROPERTY(EditAnywhere)
    float m_OnceTurnFireTargetOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_TwiceTurnFireTargetOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_TurnFireDOTime;
    
    UPROPERTY(EditAnywhere)
    float m_TurnFireScale;
    
    UTresAttack1_e_ex047_Fire();
};

