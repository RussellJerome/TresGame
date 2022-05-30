#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresCardWallControlActor_e_ex356.generated.h"

class USceneComponent;

UCLASS(HideDropdown)
class ATresCardWallControlActor_e_ex356 : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
public:
    ATresCardWallControlActor_e_ex356();
};

