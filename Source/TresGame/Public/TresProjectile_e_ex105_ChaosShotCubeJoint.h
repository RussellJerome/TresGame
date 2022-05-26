#pragma once
#include "CoreMinimal.h"
#include "EX105_JOINT_INFO.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex105_ChaosShotCubeJoint.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex105_ChaosShotCubeJoint : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FEX105_JOINT_INFO m_JointInfo[3];
    
    ATresProjectile_e_ex105_ChaosShotCubeJoint();
};

