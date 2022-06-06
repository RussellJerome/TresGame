#pragma once
#include "CoreMinimal.h"
#include "TresUINaviMapMarkerData.generated.h"

class UGFxObject;
class AActor;

USTRUCT(BlueprintType)
struct FTresUINaviMapMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* ASObject;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> OwnerActor;
    
    TRESGAME_API FTresUINaviMapMarkerData();
};

