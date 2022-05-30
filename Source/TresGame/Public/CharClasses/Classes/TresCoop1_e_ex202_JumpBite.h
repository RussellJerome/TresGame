#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoop1_e_ex202_JumpBite.generated.h"

UCLASS(HideDropdown)
class UTresCoop1_e_ex202_JumpBite : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_EntryRadius;
    
public:
    UTresCoop1_e_ex202_JumpBite();
};

