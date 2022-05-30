#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresClipData.h"
#include "TresClipManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresClipManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FTresClipData> ClipDataArray;
    
public:
    UTresClipManagerComponent();
};

