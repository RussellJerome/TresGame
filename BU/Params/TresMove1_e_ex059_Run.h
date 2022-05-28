#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove1_e_ex059_Run.generated.h"

UCLASS(HideDropdown)
class UTresMove1_e_ex059_Run : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnToTargetSpeedOnMoveEnd;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RunStartAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RunLoopAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RunEndAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_QuickTurnAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_QuickStopAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RunEndLeftAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RunEndRightAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_WalkEndLeftAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_WalkEndRightAnimName;
    
    UTresMove1_e_ex059_Run();
};

