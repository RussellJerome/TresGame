#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoop1_e_ex354.generated.h"

UCLASS(HideDropdown)
class UTresCoop1_e_ex354 : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_TimeOutTime;
    
public:
    UTresCoop1_e_ex354();
};

