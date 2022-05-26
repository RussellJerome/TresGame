#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex203_Absorption.generated.h"

UCLASS(HideDropdown)
class UTresCoop1_e_ex203_Absorption : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_CheckRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CheckAngle;
    
public:
    UTresCoop1_e_ex203_Absorption();
    UFUNCTION()
    void ApplyAbortCheck(const FTresCoopDefinitionParamBP& Param) const;
    
};

