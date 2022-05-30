#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresPhotoHologramAreaVolume.generated.h"

UCLASS()
class ATresPhotoHologramAreaVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool IsEndOverlapTrigger;
    
    UPROPERTY(EditAnywhere)
    bool IsWarningEvent;
    
    UPROPERTY(EditAnywhere)
    bool IsPlayerLocationResetEvent;
    
    UPROPERTY(EditAnywhere)
    bool IsHologramLocationResetEvent;
    
    UPROPERTY(EditAnywhere)
    bool IsHologramDestroyEvent;
    
    ATresPhotoHologramAreaVolume();
};

