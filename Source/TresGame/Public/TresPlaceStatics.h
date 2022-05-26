#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresSnapData.h"
#include "UObject/NoExportTypes.h"
#include "TresPlaceStatics.generated.h"

class AActor;

UCLASS(Abstract, BlueprintType, NotPlaceable)
class TRESGAME_API UTresPlaceStatics : public UObject {
    GENERATED_BODY()
public:
    UTresPlaceStatics();
    UFUNCTION(BlueprintCallable)
    static void SnapGround(AActor* Actor, const FTresSnapData& Data);
    
    UFUNCTION(BlueprintPure)
    static bool CalcSnapGroundLocation(UObject* WorldContextObject, FVector Location, const FTresSnapData& Data, FVector& retLocation);
    
};

