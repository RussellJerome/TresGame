#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickInterest.generated.h"

class UTresRootComponent;

UCLASS(Abstract, Config=Game)
class ATresGimmickInterest : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
public:
    ATresGimmickInterest();
};

