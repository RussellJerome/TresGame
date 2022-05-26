#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "TresAutoNavLinkTestingActor.generated.h"

UCLASS()
class ATresAutoNavLinkTestingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNavigationLink PointLink;
    
    ATresAutoNavLinkTestingActor();
};

