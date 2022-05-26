#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_RailSlide.h"
#include "TresPlayerState_RailSlideMI.generated.h"

class ATresCameraRailSlideMI;

UCLASS()
class UTresPlayerState_RailSlideMI : public UTresPlayerState_RailSlide {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCameraRailSlideMI* m_pCameraMI;
    
    UTresPlayerState_RailSlideMI();
};

