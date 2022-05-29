#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFMerryGoRound.h"
#include "TresPlayerState_AFMerryGoRound.generated.h"

class ATresAttractionPawnMerryGoRound;

UCLASS()
class UTresPlayerState_AFMerryGoRound : public UTresCharState_AFMerryGoRound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresAttractionPawnMerryGoRound* m_pObj;
    
public:
    UTresPlayerState_AFMerryGoRound();
};