#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex308.generated.h"

UCLASS(HideDropdown)
class UTresCoop1_e_ex308 : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsDisableDamageAbortTeam: 1;
    
public:
    UTresCoop1_e_ex308();
    UFUNCTION()
    void OnCoopWarpStart(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    void OnCoopAttackStart(const FTresCoopDefinitionParamBP& Param);
    
};

