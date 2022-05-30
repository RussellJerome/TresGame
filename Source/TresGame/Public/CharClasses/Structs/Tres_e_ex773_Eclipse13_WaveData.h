#pragma once
#include "CoreMinimal.h"
#include "Tres_e_ex773_Eclipse13_WaveData.generated.h"

class UTres_e_ex773_Eclipse13_WaveAsset;

USTRUCT(BlueprintType)
struct FTres_e_ex773_Eclipse13_WaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartWait;
    
    UPROPERTY(EditAnywhere)
    UTres_e_ex773_Eclipse13_WaveAsset* Asset;
    
    TRESGAME_API FTres_e_ex773_Eclipse13_WaveData();
};

