#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRaderObject.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipRaderObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* m_pRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMarker;
    
    UPROPERTY(Transient)
    UGFxObject* m_pWorld;
    
    UPROPERTY(Transient)
    UGFxObject* m_pArena;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTravel;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTreasure;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCrystal;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBox;
    
    TRESGAME_API FTresGumiShipRaderObject();
};

