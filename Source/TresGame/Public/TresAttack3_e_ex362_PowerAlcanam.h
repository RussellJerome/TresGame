#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "PowerAlcanamNumTypes_e_ex362.h"
#include "TresAttack3_e_ex362_PowerAlcanam.generated.h"

class UEnvQuery;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex362_PowerAlcanam : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<PowerAlcanamNumTypes_e_ex362> m_Type;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsMaxPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartMotPlaySkipTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartMotPlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_AttackNotMoveDist;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMoveScaleMin;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMoveScale;
    
    UPROPERTY(EditAnywhere)
    float m_Attack7MoveScale;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMoveDist;
    
    UPROPERTY(EditAnywhere)
    float m_Attack2MoveDist;
    
    UPROPERTY(EditAnywhere)
    float m_Attack3MoveDist;
    
    UPROPERTY(EditAnywhere)
    float m_Attack7MoveDist;
    
    UPROPERTY(EditAnywhere)
    float m_Attack1MoveZScale;
    
    UPROPERTY(EditAnywhere)
    float m_Attack3MoveZScale;
    
    UPROPERTY(EditAnywhere)
    float m_Attack8MoveZScale;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMoveZScale;
    
    UPROPERTY(EditAnywhere)
    float m_GroundCheckHigh;
    
    UPROPERTY(EditAnywhere)
    float m_WarpOffsetHigh;
    
    UPROPERTY(EditAnywhere)
    float m_ChaseRate;
    
    UPROPERTY(EditAnywhere)
    float m_ChaseDist;
    
    UPROPERTY(EditAnywhere)
    float m_WarpWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_CutDownSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_CutDownLoopMotHight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DonotWarpAttack;
    
    UPROPERTY(EditAnywhere)
    float m_LandTimeUpTime;
    
public:
    UTresAttack3_e_ex362_PowerAlcanam();
};

