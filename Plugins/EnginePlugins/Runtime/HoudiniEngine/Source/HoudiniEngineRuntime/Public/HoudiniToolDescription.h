#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EHoudiniToolType.h"
#include "HoudiniToolDescription.generated.h"

class UHoudiniAsset;

USTRUCT(BlueprintType)
struct FHoudiniToolDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    EHoudiniToolType Type;
    
    UPROPERTY(EditAnywhere)
    FString ToolTip;
    
    UPROPERTY(EditAnywhere)
    FFilePath IconPath;
    
    UPROPERTY(EditAnywhere)
    UHoudiniAsset* HoudiniAsset;
    
    UPROPERTY(EditAnywhere)
    FString HelpURL;
    
    HOUDINIENGINERUNTIME_API FHoudiniToolDescription();
};

