#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtomCategory.generated.h"

UCLASS()
class CRIWARERUNTIME_API UAtomCategory : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtomCategory();
    UFUNCTION(BlueprintCallable)
    static void SetVolumeByName(const FString& CategoryName, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetAisacControlByName(const FString& CategoryName, const FString& AisacName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void PauseByName(const FString& CategoryName, bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPausedByName(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    static float GetVolumeByName(const FString& CategoryName);
    
};

