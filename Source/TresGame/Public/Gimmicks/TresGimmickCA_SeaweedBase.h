#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickCA_SeaweedBase.generated.h"

UCLASS(Config=Game)
class ATresGimmickCA_SeaweedBase : public AActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    ATresGimmickCA_SeaweedBase();
    
    // Fix for true pure virtual functions not being implemented
};

