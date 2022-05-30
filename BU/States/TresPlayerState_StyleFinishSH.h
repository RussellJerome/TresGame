#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_StyleFinish.h"
#include "TresPlayerState_StyleFinishSH.generated.h"

class ATresCameraNormal;
class ATresStylePawnSHPegasus;
class ATresStylePawnSHChariot;
class ATresCameraFix;
class ATresStylePawnSHFryingpan;

UCLASS()
class UTresPlayerState_StyleFinishSH : public UTresPlayerState_StyleFinish {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresStylePawnSHPegasus* m_pPegasus;
    
    UPROPERTY()
    ATresStylePawnSHChariot* m_pChariot;
    
    UPROPERTY()
    ATresCameraFix* m_CameraFix;
    
    UPROPERTY()
    ATresCameraNormal* m_Camera;
    
    UPROPERTY()
    ATresStylePawnSHFryingpan* m_pFryingpan;
    
public:
    UTresPlayerState_StyleFinishSH();
};

