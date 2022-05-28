#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex026_ColorSmoke.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresCoop1_e_ex026_ColorSmoke : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_EntryRadius;
    
    UPROPERTY(EditAnywhere)
    float m_ForwardOffset;
    
    UPROPERTY(EditAnywhere)
    float m_SpaceBetween;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_QueryTemplateWarp;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_QueryShakeOffWarp;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    float m_QueryIntervalTime;
    
public:
    UTresCoop1_e_ex026_ColorSmoke();
    UFUNCTION()
    void ProgressSpreadStep(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION()
    bool IsStartSpread(const FTresCoopDefinitionParamBP& Param) const;
    
    UFUNCTION()
    void CoopWarpReady(const FTresCoopDefinitionParamBP& Param);
    
};

