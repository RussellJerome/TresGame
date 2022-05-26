#pragma once
#include "CoreMinimal.h"
#include "CAPrizeChimneyParam.h"
#include "GameFramework/Actor.h"
#include "TresGimmickCA_PrizeChimneyGroup.generated.h"

UCLASS()
class ATresGimmickCA_PrizeChimneyGroup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCAPrizeChimneyParam m_Parameter;
    
public:
    ATresGimmickCA_PrizeChimneyGroup();
    UFUNCTION(BlueprintPure)
    int32 GetHitPoint() const;
    
};

