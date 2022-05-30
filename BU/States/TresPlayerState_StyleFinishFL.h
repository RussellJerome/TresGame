#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_StyleFinish.h"
#include "TresPlayerState_StyleFinishFL.generated.h"

class ATresStylePawnFLKraken;

UCLASS()
class UTresPlayerState_StyleFinishFL : public UTresPlayerState_StyleFinish {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresStylePawnFLKraken* m_pKraken;
    
public:
    UTresPlayerState_StyleFinishFL();
};

