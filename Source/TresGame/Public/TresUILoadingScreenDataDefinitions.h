#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresUICharaID.h"
#include "TresUILoadingScreenDataDefinitions.generated.h"

class UTexture;

USTRUCT()
struct FTresUILoadingScreenDataDefinitions : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresUICharaID FromChara;
    
    UPROPERTY(EditDefaultsOnly)
    FString CharaTextID;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* ImageAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FString CommentTextID;
    
    TRESGAME_API FTresUILoadingScreenDataDefinitions();
};

