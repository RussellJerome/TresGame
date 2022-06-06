#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Tres_e_ex773_Eclipse13_ShellMoveData.h"
#include "Tres_e_ex773_Eclipse13_WaveAsset.generated.h"

UCLASS()
class UTres_e_ex773_Eclipse13_WaveAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTres_e_ex773_Eclipse13_ShellMoveData> DataArray;
    
    UTres_e_ex773_Eclipse13_WaveAsset();
};

