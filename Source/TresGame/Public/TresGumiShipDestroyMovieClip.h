#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipDestroyMovieClip.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipDestroyMovieClip {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* m_pRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNumEff;
    
    TRESGAME_API FTresGumiShipDestroyMovieClip();
};

