#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_bx903_ChangeRushMode.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_bx903_ChangeRushMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_TurnSpeed;
    
public:
    UTresAction1_e_bx903_ChangeRushMode();
};

