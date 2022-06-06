#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresOxygenPoolActor.generated.h"

class UTresOxygenPoolComponent;
class UParticleSystemComponent;

UCLASS(Abstract, Config=Game)
class ATresOxygenPoolActor : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresOxygenPoolComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticle;
    
public:
    ATresOxygenPoolActor();
};

