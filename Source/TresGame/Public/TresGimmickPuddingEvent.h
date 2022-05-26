#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickPuddingEvent.generated.h"

class UTresReactorComponent;

UCLASS(Abstract)
class ATresGimmickPuddingEvent : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresReactorComponent* MyReactor;
    
public:
    ATresGimmickPuddingEvent();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DropItem();
    
};

