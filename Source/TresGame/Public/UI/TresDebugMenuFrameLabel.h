#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuFrameLabel.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuFrameLabel {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName m_LabelName;
    
    UPROPERTY()
    int32 m_LabelFrame;
    
    TRESGAME_API FTresDebugMenuFrameLabel();
};

