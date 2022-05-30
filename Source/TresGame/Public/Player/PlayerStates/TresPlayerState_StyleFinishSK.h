#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_StyleFinish.h"
#include "TresPlayerState_StyleFinishSK.generated.h"

class ATresStylePawnSKChandelier;

UCLASS()
class UTresPlayerState_StyleFinishSK : public UTresPlayerState_StyleFinish {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresStylePawnSKChandelier* m_pChandelier;
    
public:
    UTresPlayerState_StyleFinishSK();
};

