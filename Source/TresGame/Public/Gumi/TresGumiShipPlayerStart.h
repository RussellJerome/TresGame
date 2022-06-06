#pragma once
#include "CoreMinimal.h"
#include "TresPlayerStart.h"
#include "TresGumiShipPlayerStart.generated.h"

class AActor;

UCLASS()
class ATresGumiShipPlayerStart : public ATresPlayerStart {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_pConnectedActor;
    
public:
    ATresGumiShipPlayerStart();
};

