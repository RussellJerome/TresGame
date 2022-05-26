#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresPhilharmonicData.generated.h"

USTRUCT()
struct FTresPhilharmonicData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName MapName;
    
    UPROPERTY(EditDefaultsOnly)
    FString ProgramMoviePath;
    
    UPROPERTY(EditDefaultsOnly)
    FString ProgramNameTextID;
    
    TRESGAME_API FTresPhilharmonicData();
};

