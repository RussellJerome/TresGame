#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipTargetMarkerObject.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipTargetMarkerObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* m_pRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLockAnm;
    
    TRESGAME_API FTresGumiShipTargetMarkerObject();
};

