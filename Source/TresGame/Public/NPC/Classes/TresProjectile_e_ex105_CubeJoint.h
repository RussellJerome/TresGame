#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_e_ex105_CubeJoint.generated.h"

class ATresProjectileBase;

UCLASS(Abstract)
class ATresProjectile_e_ex105_CubeJoint : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_pRanbuCubeJoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube1RotSpeedNormalYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube1RotSpeedNormalRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube2RotSpeedNormalYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube2RotSpeedNormalRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube3RotSpeedNormalYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube3RotSpeedNormalRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube4RotSpeedNormalYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube4RotSpeedNormalRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube5RotSpeedNormalYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube5RotSpeedNormalRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube6RotSpeedNormalYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube6RotSpeedNormalRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube7RotSpeedNormalYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube7RotSpeedNormalRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube8RotSpeedNormalYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube8RotSpeedNormalRoll;
    
    ATresProjectile_e_ex105_CubeJoint();
};

