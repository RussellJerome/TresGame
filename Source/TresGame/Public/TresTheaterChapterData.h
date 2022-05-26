#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresUIDataVersion.h"
#include "TresTheaterChapterData.generated.h"

class UTexture;

USTRUCT()
struct FTresTheaterChapterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString ChapterNameNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresTheaterChapterData();
};

