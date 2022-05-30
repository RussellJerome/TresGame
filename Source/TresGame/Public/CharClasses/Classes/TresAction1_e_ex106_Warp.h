#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex106_Warp.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction1_e_ex106_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpTime;
    
public:
    UTresAction1_e_ex106_Warp();
};

