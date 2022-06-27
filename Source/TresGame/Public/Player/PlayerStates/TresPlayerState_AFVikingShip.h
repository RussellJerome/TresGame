#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFVikingShip.h"
#include "TresPlayerState_AFVikingShip.generated.h"

class ATresAttractionPawnVikingShip;

UCLASS(Blueprintable)
class UTresPlayerState_AFVikingShip : public UTresCharState_AFVikingShip {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ATresAttractionPawnVikingShip* m_pShip;
    
    UTresPlayerState_AFVikingShip();
};

