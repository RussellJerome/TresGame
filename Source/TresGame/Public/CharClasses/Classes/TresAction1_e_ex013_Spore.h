#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex013_Spore.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex013_Spore : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_BirthNum;
    
    UTresAction1_e_ex013_Spore();
};

