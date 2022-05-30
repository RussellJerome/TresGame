#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresWallRunEffectActor.generated.h"

class UTresWallRunEffectComponent;

UCLASS(Config=Game)
class ATresWallRunEffectActor : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresWallRunEffectComponent* m_Root;
    
public:
    ATresWallRunEffectActor();
};

