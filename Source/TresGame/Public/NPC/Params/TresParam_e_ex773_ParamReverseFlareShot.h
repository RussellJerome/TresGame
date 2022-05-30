#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresParam_e_ex773_ParamReverseFlareShot.generated.h"

USTRUCT(BlueprintType)
struct FTresParam_e_ex773_ParamReverseFlareShot {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    int32 Num;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    float StartLocationOffsetSize;
    
    UPROPERTY(EditDefaultsOnly)
    float TabooEndLength;
    
    UPROPERTY(EditDefaultsOnly)
    float OneLength;
    
    UPROPERTY(EditDefaultsOnly)
    float StartTimeOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float NextSpawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ExplosionTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector TargetOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SpawnOffsetMaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> SpawnOffsetArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> SpawnOffsetAngleArray;
    
    TRESGAME_API FTresParam_e_ex773_ParamReverseFlareShot();
};

