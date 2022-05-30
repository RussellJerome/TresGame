#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
#include "TresAction5_e_ex358_RunAction.generated.h"

class UAnimationAsset;

UCLASS(HideDropdown)
class UTresAction5_e_ex358_RunAction : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_RunStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_RunLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_RunEndLeftAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_RunEndRightAnimData;
    
public:
    UTresAction5_e_ex358_RunAction();
};

