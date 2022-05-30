#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction1_n_ra201_HairAction.generated.h"

UCLASS(HideDropdown)
class UTresAction1_n_ra201_HairAction : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_ActionPointOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ActionCancelDistance;
    
    UTresAction1_n_ra201_HairAction();
};

