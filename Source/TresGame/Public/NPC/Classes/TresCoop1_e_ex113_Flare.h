#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex113_Flare.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresCoop1_e_ex113_Flare : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_WarpRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EnvQuery;
    
public:
    UTresCoop1_e_ex113_Flare();
    UFUNCTION()
    void CoopMemberWarpEnd(const FTresCoopDefinitionParamBP& Param);
    
};

