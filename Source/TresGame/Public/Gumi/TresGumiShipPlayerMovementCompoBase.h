#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipAnimMovementCompoBase.h"
#include "TresGMInputResult.h"
#include "TresGumiShipPlayerMovementCompoBase.generated.h"

class ATresGumiShipPlayerPawnBase;
class ATresGumiShipPlayerControllerDefault;
class ATresGumiShipPlayerControllerBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerMovementCompoBase : public UTresGumiShipAnimMovementCompoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ATresGumiShipPlayerPawnBase* m_pPlayer;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ATresGumiShipPlayerControllerDefault* m_pController;
    
public:
    UTresGumiShipPlayerMovementCompoBase();
protected:
    UFUNCTION()
    void _ReceiveInputRStick(float fX, float fY, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _ReceiveInputLStickV2(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _ReceiveInputLStick(float fX, float fY, const ATresGumiShipPlayerControllerBase* pController);
    
};

