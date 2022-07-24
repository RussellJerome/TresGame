#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresPlayerStateEventComponent.generated.h"

class UTresPlayerStateEvent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPlayerStateEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresPlayerStateEvent*> m_StateEvents;
    
public:
    UTresPlayerStateEventComponent();
};

