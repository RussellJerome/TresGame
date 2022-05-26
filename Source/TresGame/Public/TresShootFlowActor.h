#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresShootFlowActor.generated.h"

class UTresShootFlowComponent;

UCLASS(Config=Game)
class ATresShootFlowActor : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresShootFlowComponent* m_Root;
    
public:
    ATresShootFlowActor();
};

