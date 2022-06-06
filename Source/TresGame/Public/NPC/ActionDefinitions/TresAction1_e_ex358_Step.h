#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
#include "ETresEnemyStepDirectionType_e_ex358.h"
#include "TresAction1_e_ex358_Step.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex358_Step : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyStepDirectionType_e_ex358> m_DirectionType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RootMotionScaleXY;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableStartTargetLocation: 1;
    
public:
    UTresAction1_e_ex358_Step();
};

