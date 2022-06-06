#pragma once
#include "CoreMinimal.h"
#include "GFxWidgetBinding.generated.h"

USTRUCT(BlueprintType)
struct FGFxWidgetBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName WidgetName;
    
    UPROPERTY()
    UClass* WidgetClass;
    
    SCALEFORMUI_API FGFxWidgetBinding();
};

