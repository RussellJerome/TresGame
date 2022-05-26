#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFTeaCup.h"
#include "TresPlayerState_AFTeaCup.generated.h"

class ATresAttractionPawnTeaCup;
class ATresCameraTeaCup;
class ATresCharPawnBase;
class ATresCameraNormal;

UCLASS()
class UTresPlayerState_AFTeaCup : public UTresCharState_AFTeaCup {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresAttractionPawnTeaCup* m_pCup[3];
    
    UPROPERTY()
    ATresCameraTeaCup* m_Camera;
    
    UPROPERTY()
    ATresCharPawnBase* m_pTargetPawn;
    
    UPROPERTY()
    ATresCameraNormal* m_PuddingCamera;
    
    UTresPlayerState_AFTeaCup();
};

