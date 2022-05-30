#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnActorManagerComponent.generated.h"

class AActor;
class UTresChildActorComponent;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresSpawnActorManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UObject*> ObjectArray;
    
    UTresSpawnActorManagerComponent();
    UFUNCTION(BlueprintCallable)
    void SpawnFinalize();
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActor(TSubclassOf<AActor> Class, const FTransform& Transform, bool isStatic, UTresChildActorComponent*& retEditorOnlyChildComponent);
    
    UFUNCTION(BlueprintCallable)
    void DestroyActor();
    
};

