#pragma once
#include "CoreMinimal.h"
#include "Tres_e_ex773_Eclipse13_ShellMoveData.generated.h"

USTRUCT(BlueprintType)
struct FTres_e_ex773_Eclipse13_ShellMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SpawnTime;
    
    UPROPERTY(EditAnywhere)
    float TimeToLandingPoint;
    
    UPROPERTY(EditAnywhere)
    int32 GeneratorIndex;
    
    UPROPERTY(EditAnywhere)
    int32 LandingPointIndex;
    
    TRESGAME_API FTres_e_ex773_Eclipse13_ShellMoveData();
};

