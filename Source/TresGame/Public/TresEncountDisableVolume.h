#pragma once
#include "CoreMinimal.h"
#include "ETresEncountDisableVolumeType.h"
#include "TresVolume.h"
#include "TresEncountDisableVolume.generated.h"

UCLASS()
class ATresEncountDisableVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresEncountDisableVolumeType m_ShapeType;
    
    ATresEncountDisableVolume();
};

