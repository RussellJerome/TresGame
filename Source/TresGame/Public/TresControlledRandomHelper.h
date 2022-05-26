#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresControlledRandom.h"
#include "TresControlledRandomHelper.generated.h"

UCLASS(BlueprintType)
class UTresControlledRandomHelper : public UObject {
    GENERATED_BODY()
public:
    UTresControlledRandomHelper();
    UFUNCTION(BlueprintCallable)
    static void SetRandomControlledWeights(UPARAM(Ref) FTresControlledRandom& ControlledRandom, const TArray<float>& Weights);
    
    UFUNCTION(BlueprintCallable)
    static void SetControlledRandomPeriod(UPARAM(Ref) FTresControlledRandom& ControlledRandom, float Period);
    
    UFUNCTION(BlueprintPure)
    static int32 RandomIntInRangeFromControlledRandomGenerator(int32 Min, int32 Max, UPARAM(Ref) FTresControlledRandom& ControlledRandom);
    
    UFUNCTION(BlueprintPure)
    static int32 RandomIntFromControlledRandomGenerator(UPARAM(Ref) FTresControlledRandom& ControlledRandom);
    
    UFUNCTION(BlueprintPure)
    static float RandomFloatInRangeFromControlledRandomGenerator(float Min, float Max, UPARAM(Ref) FTresControlledRandom& ControlledRandom);
    
    UFUNCTION(BlueprintPure)
    static float RandomFloatFromControlledRandomGenerator(UPARAM(Ref) FTresControlledRandom& ControlledRandom);
    
    UFUNCTION(BlueprintPure)
    static bool RandomBoolFromControlledRandomGenerator(UPARAM(Ref) FTresControlledRandom& ControlledRandom);
    
};

