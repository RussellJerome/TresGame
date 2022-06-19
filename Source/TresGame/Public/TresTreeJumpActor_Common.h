#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresNavLinkSet_Common.h"
#include "Engine/EngineTypes.h"
#include "TresTreeJumpActor_Common.generated.h"

class UBoxComponent;
class USceneComponent;
class UPrimitiveComponent;

UCLASS()
class ATresTreeJumpActor_Common : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* SceneComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* OverlapBox;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FTresNavLinkSet_Common> NavLinkSet;
    
    UPROPERTY(EditAnywhere)
    uint32 bRefreshNavLink: 1;
    
    ATresTreeJumpActor_Common();
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

