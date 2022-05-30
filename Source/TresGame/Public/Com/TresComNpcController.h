#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "TresAIController.h"
#include "TresComNpcController.generated.h"

UCLASS()
class ATresComNpcController : public ATresAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 m_bNoPawnDestroy: 1;
    
    UPROPERTY(EditAnywhere)
    FAIRequestID m_MoveRequestID;
    
public:
    ATresComNpcController();
};

