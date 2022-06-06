#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresNavMapStatics.generated.h"

UCLASS(Abstract, BlueprintType, NotPlaceable)
class UTresNavMapStatics : public UObject {
    GENERATED_BODY()
public:
    UTresNavMapStatics();
    UFUNCTION(BlueprintCallable)
    static void SetHideNavMap(UObject* WorldContextObject, bool isHide);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceNavMapKey(FName replaceName, FName NewName);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyNavMapFromNavMapKey(FName navMapKey, float switchNavMapTime);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyNavMapFromAreaNameKey(FName dataTableKey, float switchNavMapTime);
    
};

