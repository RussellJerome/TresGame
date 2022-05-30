#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTargetCtrl.h"
#include "TresCameraRailSlideMI.generated.h"

UCLASS(NotPlaceable)
class ATresCameraRailSlideMI : public ATresCameraRotTargetCtrl {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TargetRotationPitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TargetRotationYawRate;
    
public:
    ATresCameraRailSlideMI();
};

