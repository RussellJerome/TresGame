#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresHitPawnsManager_e_he903.generated.h"

class UCurveFloat;

UCLASS()
class ATresHitPawnsManager_e_he903 : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCurveFloat* m_SuctionVelCurve;
    
    UPROPERTY()
    UCurveFloat* m_EatVelCurve;
    
public:
    ATresHitPawnsManager_e_he903();
};

