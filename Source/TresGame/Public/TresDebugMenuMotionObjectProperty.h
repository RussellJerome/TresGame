#pragma once
#include "CoreMinimal.h"
#include "ETresDebugMenuMotionObjectPropertyType.h"
#include "TresDebugMenuMotionObjectKeyFrame.h"
#include "TresDebugMenuMotionObjectProperty.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuMotionObjectProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ETresDebugMenuMotionObjectPropertyType> m_PropertyType;
    
    UPROPERTY()
    TArray<FTresDebugMenuMotionObjectKeyFrame> m_KeyFrames;
    
    TRESGAME_API FTresDebugMenuMotionObjectProperty();
};

