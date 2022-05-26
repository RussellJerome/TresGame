#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimSingleNodeInstance.h"
#include "TresGummiShipAnimInstance.generated.h"

UCLASS(NonTransient)
class UTresGummiShipAnimInstance : public UAnimSingleNodeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 MontagePreviewStartSectionIdx;
    
    UTresGummiShipAnimInstance();
};

