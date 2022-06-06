#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipMultiItemMovieClip.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipMultiItemMovieClip {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* m_pRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pItemName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pItemNum;
    
    TRESGAME_API FTresGumiShipMultiItemMovieClip();
};

