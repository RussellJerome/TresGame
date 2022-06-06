#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresTheaterMapInfo.h"
#include "TresUIGameFlagData.h"
#include "TresTheaterSceneData.generated.h"

USTRUCT()
struct FTresTheaterSceneData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName Chapter;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresTheaterMapInfo> MapInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FString SceneNameNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSecret;
    
    UPROPERTY(EditDefaultsOnly)
    int32 nDispPriorty;
    
    TRESGAME_API FTresTheaterSceneData();
};

