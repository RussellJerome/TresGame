#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBetweenSpeedEvent.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipTouchSpeedPointEvent.h"
#include "TresGumiShipDirectParam.h"
#include "TresGumiShipDirectSpeedCompo.generated.h"

class UTresGumiShipPlayerAccelerationBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipDirectSpeedCompo : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTresGumiShipTouchSpeedPointEvent> m_DirectParamsWhenPoint;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTresGumiShipBetweenSpeedEvent> m_DirectParamsWhenBetween;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTresGumiShipDirectParam m_DirectParamWhenUseNitro;
    
public:
    UTresGumiShipDirectSpeedCompo();
protected:
    UFUNCTION()
    void _OnUseNitro();
    
    UFUNCTION()
    void _OnChangeAccelCompo(UTresGumiShipPlayerAccelerationBase* pCompo);
    
};

