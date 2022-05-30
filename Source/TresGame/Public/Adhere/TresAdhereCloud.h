#pragma once
#include "CoreMinimal.h"
#include "TresAdhereObjBase.h"
#include "TresAdhereCloud.generated.h"

UCLASS()
class ATresAdhereCloud : public ATresAdhereObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_WeatherTimeCloud;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_WeatherCloudParamCTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_WeatherTimeLightRain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_WeatherLightRainParamCTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_WeatherTimeHeavyRain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_WeatherHeavyRainParamCTarget;
    
public:
    ATresAdhereCloud();
};

