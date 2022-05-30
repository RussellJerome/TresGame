#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerMovementCompoBase.h"
#include "TresGumiShipPlayerDebugMovementCompo.generated.h"

class ATresGumiShipPlayerControllerBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerDebugMovementCompo : public UTresGumiShipPlayerMovementCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipPlayerDebugMovementCompo();
protected:
    UFUNCTION()
    void _ReceiveInputR3ButtonRP(const bool bPressed, const bool bReleased, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _ReceiveInputR2ButtonD(const bool bPressed, const float fDownTime, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _ReceiveInputL2ButtonD(const bool bPressed, const float fDownTime, const ATresGumiShipPlayerControllerBase* pController);
    
};

