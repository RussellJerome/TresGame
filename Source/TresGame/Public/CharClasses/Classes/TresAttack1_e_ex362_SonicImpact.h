#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex362_SonicImpact.generated.h"

class UEnvQuery;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex362_SonicImpact : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_InitMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MinMoveTime;
    
    UPROPERTY(EditAnywhere)
    float m_AttackEndMoveScale;
    
    UPROPERTY(VisibleInstanceOnly)
    float m_RotRate;
    
    UPROPERTY(EditAnywhere)
    int32 m_TurnCountMax;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_TarnEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_TarnEQSMinRadius;
    
    UPROPERTY(EditAnywhere)
    float m_TarnEQSMaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionAttackDataID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackCollisionIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AfterChaseMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackHitMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AtkHitSEAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectedzWaitTime;
    
public:
    UTresAttack1_e_ex362_SonicImpact();
};

