#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresMove2_e_ex050_RailFly.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresMove2_e_ex050_RailFly : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_pMoveAnimData;
    
public:
    UTresMove2_e_ex050_RailFly();
};

