#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickBxDarkCubeParts.generated.h"

class UTresRootComponent;

UCLASS(Config=Game)
class ATresGimmickBxDarkCubeParts : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
public:
    ATresGimmickBxDarkCubeParts();
};

