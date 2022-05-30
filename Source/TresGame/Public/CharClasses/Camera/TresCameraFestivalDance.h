#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraFestivalDance.generated.h"

class ATresRaFestivalDanceManager;

UCLASS(NotPlaceable)
class ATresCameraFestivalDance : public ATresCameraNormal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CameraHeightOffset;
    
private:
    UPROPERTY()
    ATresRaFestivalDanceManager* m_pDanceMng;
    
public:
    ATresCameraFestivalDance();
};

