#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraFestivalDanceRapunzel.generated.h"

class ATresRaFestivalDanceManager;
class AFestivalDancePawn_n_ra201;

UCLASS(NotPlaceable)
class ATresCameraFestivalDanceRapunzel : public ATresCameraNormal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CameraHeightOffset;
    
private:
    UPROPERTY()
    ATresRaFestivalDanceManager* m_pDanceMng;
    
    UPROPERTY()
    AFestivalDancePawn_n_ra201* m_pRapunzel;
    
public:
    ATresCameraFestivalDanceRapunzel();
};

