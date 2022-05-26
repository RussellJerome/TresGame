#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TresPlaceActorInterface.generated.h"

UINTERFACE(Blueprintable)
class UTresPlaceActorInterface : public UInterface {
    GENERATED_BODY()
};

class ITresPlaceActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPNE_SnapGround();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPNE_SetSnapGroundOffset(float Height);
    
};

