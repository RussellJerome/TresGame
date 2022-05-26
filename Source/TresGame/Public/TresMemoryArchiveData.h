#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresMemoryArchiveData.generated.h"

class UTexture;

USTRUCT()
struct FTresMemoryArchiveData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName MapName;
    
    UPROPERTY(EditDefaultsOnly)
    FString EpisodeNameTextID;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* IconAsset;
    
    TRESGAME_API FTresMemoryArchiveData();
};

