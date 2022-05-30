#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RemyCuttingFoodType.h"
#include "TresRemyCuttingFoodParam.generated.h"

class ATresRemyPawnBase;
class AStaticMeshActor;
class UParticleSystem;
class UCurveVector;

USTRUCT(BlueprintType)
struct FTresRemyCuttingFoodParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    RemyCuttingFoodType FoodType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> FoodPawn;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> FoodMassStaticMeshActor;
    
    UPROPERTY(EditDefaultsOnly)
    float FoodSliceBending;
    
    UPROPERTY(EditDefaultsOnly)
    float FoodSliceJumpWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float FoodSliceJumpWaitTimeLagRangeStart;
    
    UPROPERTY(EditDefaultsOnly)
    float FoodSliceJumpWaitTimeLagRangeEnd;
    
    UPROPERTY(EditDefaultsOnly)
    float FoodSliceJumpSpeedCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* FoodClusterParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* FoodClusterParticleCurveVector;
    
    TRESGAME_API FTresRemyCuttingFoodParam();
};

