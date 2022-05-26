#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickTs02Turidana.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Config=Game)
class ATresGimmickTs02Turidana : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    ATresGimmickTs02Turidana();
    UFUNCTION(BlueprintImplementableEvent)
    void GimmickNotifyActorStartSetBase(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName);
    
};

