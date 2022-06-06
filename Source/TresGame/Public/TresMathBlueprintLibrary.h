#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "TresMathBlueprintLibrary.generated.h"

UCLASS(Abstract, BlueprintType, NotPlaceable)
class UTresMathBlueprintLibrary : public UObject {
    GENERATED_BODY()
public:
    UTresMathBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static bool TresIsInRangeInt(int32 Value, int32 Min, int32 Max, bool inclusiveMin, bool inclusiveMax);
    
    UFUNCTION(BlueprintPure)
    static bool TresIsInRangeFloat(float Value, float Min, float Max, bool inclusiveMin, bool inclusiveMax);
    
    UFUNCTION(BlueprintPure)
    static float TresGetRangeFloat(float Range, bool bRangeMinus);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresDecIntLoop(UPARAM(Ref) int32& ref, int32 dec, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresDecIntClamp(UPARAM(Ref) int32& ref, int32 dec, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresDecInt(UPARAM(Ref) int32& ref, int32 dec);
    
    UFUNCTION(BlueprintCallable)
    static float TresDecFloatLoop(UPARAM(Ref) float& ref, float dec, float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    static float TresDecFloatClamp(UPARAM(Ref) float& ref, float dec, float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    static float TresDecFloat(UPARAM(Ref) float& ref, float dec);
    
    UFUNCTION(BlueprintPure)
    static float TresCalcRateFloat(float Value, float Min, float Max, bool IsReverse);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresAddIntLoop(UPARAM(Ref) int32& ref, int32 Add, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresAddIntClamp(UPARAM(Ref) int32& ref, int32 Add, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresAddInt(UPARAM(Ref) int32& ref, int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static float TresAddFloatLoop(UPARAM(Ref) float& ref, float Add, float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    static float TresAddFloatClamp(UPARAM(Ref) float& ref, float Add, float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    static float TresAddFloat(UPARAM(Ref) float& ref, float Add);
    
    UFUNCTION(BlueprintPure)
    static FVector GetParabolaLocation(const FVector& StartLocation, const FVector& EndLocation, float Height, float MoveRate, float HeightRate);
    
};

