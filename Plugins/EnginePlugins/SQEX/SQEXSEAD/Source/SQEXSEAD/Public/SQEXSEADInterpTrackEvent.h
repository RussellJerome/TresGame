#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "SQEXSEADEventTrackKey.h"
#include "SQEXSEADInterpTrackEvent.generated.h"

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADInterpTrackEvent : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSQEXSEADEventTrackKey> EventTrack;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenJumpingForwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseCustomEventName: 1;
    
    USQEXSEADInterpTrackEvent();
};

