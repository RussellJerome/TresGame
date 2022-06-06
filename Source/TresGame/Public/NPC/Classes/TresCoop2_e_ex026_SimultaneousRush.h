#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopSimultaneousRushInfo.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop2_e_ex026_SimultaneousRush.generated.h"

UCLASS(HideDropdown)
class UTresCoop2_e_ex026_SimultaneousRush : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresCoopSimultaneousRushInfo> m_SimultaneousRushInfos;
    
    UTresCoop2_e_ex026_SimultaneousRush();
    UFUNCTION()
    void CoopWarpReady(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    void CoopWarpFinished(const FTresCoopDefinitionParamBP& Param);
    
};

