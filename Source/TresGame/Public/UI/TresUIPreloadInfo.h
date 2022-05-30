#pragma once
#include "CoreMinimal.h"
#include "TresUIPreloadInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FTresUIPreloadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    uint32 Handle;
    
    UPROPERTY(Transient)
    FString PackageName;
    
    UPROPERTY(Transient)
    FString Name;
    
    UPROPERTY(Transient)
    TArray<FString> PreloadQueue;
    
    UPROPERTY(Transient)
    TArray<UObject*> LoadedObjectsHolder;
    
    TRESGAME_API FTresUIPreloadInfo();
};

