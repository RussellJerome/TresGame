#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresComNpcActionActor.generated.h"

class UTresComNpcActionComponent;

UCLASS()
class TRESGAME_API ATresComNpcActionActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresComNpcActionComponent* MyComNpcAction;
    
public:
    ATresComNpcActionActor();
};

