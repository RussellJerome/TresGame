#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGuideObjects.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipGuideObjects {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* m_pGuide;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCursor;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDist;
    
    UPROPERTY(Transient)
    UGFxObject* m_pIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLevel;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNormalLevel;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBossLevel;
    
    TRESGAME_API FTresGumiShipGuideObjects();
};

