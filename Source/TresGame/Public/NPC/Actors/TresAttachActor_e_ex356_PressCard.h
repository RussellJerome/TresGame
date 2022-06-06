#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresAttachActor_e_ex356_PressCard.generated.h"

class USceneComponent;

UCLASS()
class ATresAttachActor_e_ex356_PressCard : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    ATresAttachActor_e_ex356_PressCard();
};

