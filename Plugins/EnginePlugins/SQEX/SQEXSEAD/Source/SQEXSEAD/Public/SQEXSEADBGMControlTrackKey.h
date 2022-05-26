#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADBGMControlTypes.h"
#include "SQEXSEADBGMControlTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADBGMControlTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADBGMControlTypes::Type> ControlType;
    
    UPROPERTY(EditAnywhere)
    FName SlotName;
    
    UPROPERTY(EditAnywhere)
    int32 SectionIndex;
    
    UPROPERTY(EditAnywhere)
    int32 ModeIndex;
    
    SQEXSEAD_API FSQEXSEADBGMControlTrackKey();
};

