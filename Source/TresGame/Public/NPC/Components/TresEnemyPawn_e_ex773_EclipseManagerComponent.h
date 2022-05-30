#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresEnemyPawn_e_ex773_EclipseManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresEnemyPawn_e_ex773_EclipseManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float WaveCompleteAfterTime;
    
public:
    UTresEnemyPawn_e_ex773_EclipseManagerComponent();
};

