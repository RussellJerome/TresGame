#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "RootMotionScaleDataParam_e_ex781.h"
#include "TresAttack4_e_ex781_TurnSlash.generated.h"

UCLASS()
class UTresAttack4_e_ex781_TurnSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ToTargetTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowDownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DirectAttackDist;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion1ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion2ScaleParam;
    
    UTresAttack4_e_ex781_TurnSlash();
};

