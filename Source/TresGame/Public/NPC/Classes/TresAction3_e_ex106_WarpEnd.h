#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex106_WarpEnd.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction3_e_ex106_WarpEnd : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpTime;
    
public:
    UTresAction3_e_ex106_WarpEnd();
};

