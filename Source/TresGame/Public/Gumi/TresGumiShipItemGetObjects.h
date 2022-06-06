#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipItemGetObjects.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipItemGetObjects {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* m_pRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMaxIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pItemName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pItemNum;
    
    TRESGAME_API FTresGumiShipItemGetObjects();
};

