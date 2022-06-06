#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTheaterData.generated.h"

class UDataTable;

UCLASS()
class UTresTheaterData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ChapterData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* SceneData;
    
    UTresTheaterData();
};

