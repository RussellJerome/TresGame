#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_bx903_ChangeNormalMode.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_bx903_ChangeNormalMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownSpeed;
    
public:
    UTresAction2_e_bx903_ChangeNormalMode();
};

