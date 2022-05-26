#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Tres_e_ex773_Eclipse13_WaveData.h"
#include "Tres_e_ex773_Eclipse13_WaveArrayAsset.generated.h"

UCLASS()
class UTres_e_ex773_Eclipse13_WaveArrayAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTres_e_ex773_Eclipse13_WaveData> DataArray;
    
    UPROPERTY(EditAnywhere)
    float RequestReturnTime;
    
    UTres_e_ex773_Eclipse13_WaveArrayAsset();
};

