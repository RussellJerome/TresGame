#pragma once
#include "CoreMinimal.h"
#include "TresPrizeCrab.h"
#include "MovableCrabParam.h"
#include "TresPrizeMovableCrab.generated.h"

UCLASS(Abstract)
class ATresPrizeMovableCrab : public ATresPrizeCrab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bStopMovement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMovableCrabParam m_Parameter;
    
public:
    ATresPrizeMovableCrab();
};

