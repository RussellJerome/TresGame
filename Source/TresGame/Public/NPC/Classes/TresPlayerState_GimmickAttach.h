#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresPlayerState_GimmickAttach.generated.h"

class UAnimationAsset;

UCLASS()
class UTresPlayerState_GimmickAttach : public UTresStateBase {
    GENERATED_BODY()
public:
    UTresPlayerState_GimmickAttach();
    UFUNCTION()
    void OnAnimStarted(UAnimationAsset* InAnimAsset);
    
    UFUNCTION()
    void OnAnimEnded(UAnimationAsset* InAnimAsset, bool bInterrupted);
    
};

