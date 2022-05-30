#pragma once
#include "CoreMinimal.h"
#include "TresCharState_DMStitch.h"
#include "TresPlayerState_DMStitch.generated.h"

class ATresDisneyMagicPawnStitch;
class ATresCameraForceLockon;

UCLASS()
class UTresPlayerState_DMStitch : public UTresCharState_DMStitch {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresDisneyMagicPawnStitch* m_pObj;
    
    UPROPERTY()
    ATresCameraForceLockon* m_Camera;
    
    UTresPlayerState_DMStitch();
};

