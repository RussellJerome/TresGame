#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresIntervalUpdateComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresIntervalUpdateComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_ExecFrame;
    
public:
    UTresIntervalUpdateComponent();
    UFUNCTION(BlueprintPure)
    bool IsUpdate();
    
};

