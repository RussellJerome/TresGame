#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEmitterPool.generated.h"

class ATresEmitterPoolChild;

UCLASS(NotPlaceable, Transient)
class ATresEmitterPool : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Transient)
    ATresEmitterPoolChild* m_pSubActor;
    
public:
    ATresEmitterPool();
};

