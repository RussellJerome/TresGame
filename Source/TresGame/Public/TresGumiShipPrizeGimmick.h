#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPrizeBase.h"
#include "GUMI_SHIP_PRIZE_ITEM_KIND.h"
#include "TresGumiShipPrizeGimmick.generated.h"

UCLASS()
class ATresGumiShipPrizeGimmick : public ATresGumiShipPrizeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    GUMI_SHIP_PRIZE_ITEM_KIND m_KindID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSuctionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSuctionSpeed;
    
public:
    ATresGumiShipPrizeGimmick();
};

