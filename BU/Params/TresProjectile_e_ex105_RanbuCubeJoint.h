#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_e_ex105_RanbuCubeJoint.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex105_RanbuCubeJoint : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeScaleMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkColorStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeScaleMinStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeScaleMinTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeNotAtkColorStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveDistMax;
    
    ATresProjectile_e_ex105_RanbuCubeJoint();
};

