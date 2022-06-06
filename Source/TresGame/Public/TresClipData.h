#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresClipData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresClipData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bExclusionMode;
    
    UPROPERTY(EditAnywhere)
    float ClipLength;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> ClassArray;
    
    UPROPERTY(EditAnywhere)
    FName ClippingGroupName;
    
    UPROPERTY(EditAnywhere)
    bool bUseClippingEvent;
    
    UPROPERTY(EditAnywhere)
    bool bDisableTick;
    
    UPROPERTY(EditAnywhere)
    bool bDisableDitherFade;
    
    TRESGAME_API FTresClipData();
};

