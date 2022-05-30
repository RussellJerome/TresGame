#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex325_SonicImpact.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex325_SonicImpact : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_OneceAttack;
    
    UPROPERTY(EditAnywhere)
    bool m_CancelAttack;
    
    UPROPERTY(EditAnywhere)
    float m_InitMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_CancelBrakeMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_AtkEndBrakeMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_EndClearVelocity;
    
    UPROPERTY(EditAnywhere)
    float m_CancelARotateSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionAttackDataID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackCollisionIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WallReflectionLimitRotation;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AtkHitSEAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnToVelRotation;
    
public:
    UTresAttack1_e_ex325_SonicImpact();
};

