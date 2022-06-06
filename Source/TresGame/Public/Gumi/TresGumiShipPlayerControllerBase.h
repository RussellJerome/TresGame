#pragma once
#include "CoreMinimal.h"
#include "TresPlayerControllerLowerBase.h"
#include "TresGMInputResult.h"
#include "TresGumiShipPlayerControllerBase.generated.h"

class ATresGumiShipPlayerControllerBase;
class UTresGumiShipPlayerInputWorker;

UCLASS(Abstract)
class ATresGumiShipPlayerControllerBase : public ATresPlayerControllerLowerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPControllerInput, const FTresGMInputResult&, rResult, const ATresGumiShipPlayerControllerBase*, pController);
    
protected:
    UPROPERTY(Export)
    UTresGumiShipPlayerInputWorker* m_pWorker;
    
public:
    ATresGumiShipPlayerControllerBase();
    UFUNCTION(Exec)
    void ToggleDebugSpeedInfoDraw();
    
    UFUNCTION(Exec)
    void ToggleDebugInputDraw();
    
    UFUNCTION(Exec)
    void ToggleDebugGMKeyConfigTest();
    
    UFUNCTION(Exec)
    void ToggleDebugChannelInputDraw();
    
};

