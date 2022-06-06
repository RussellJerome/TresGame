#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresAreaNameStatics.generated.h"

UCLASS(Abstract, BlueprintType, NotPlaceable)
class UTresAreaNameStatics : public UObject {
    GENERATED_BODY()
public:
    UTresAreaNameStatics();
    UFUNCTION(BlueprintCallable)
    static void SetFlagEnableUIFromBlueprint(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAreaNameOverlapManagerArray();
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyMapName(FName MapNameKey);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyMapAndAreaName(FName AreaTableKey);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyAreaName(FName dataTableKey, bool showUI, bool bForce);
    
};

