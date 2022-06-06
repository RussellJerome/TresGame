#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniAsset.generated.h"

class UThumbnailInfo;

UCLASS(EditInlineNew)
class HOUDINIENGINERUNTIME_API UHoudiniAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString AssetFileName;
    
    UPROPERTY()
    UThumbnailInfo* ThumbnailInfo;
    
    UHoudiniAsset();
};

