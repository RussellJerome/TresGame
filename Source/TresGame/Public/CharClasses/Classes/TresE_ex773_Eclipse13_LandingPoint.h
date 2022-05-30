#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresE_ex773_Eclipse13_LandingPoint.generated.h"

class USceneComponent;

UCLASS(Abstract)
class ATresE_ex773_Eclipse13_LandingPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    UPROPERTY(EditAnywhere)
    int32 GeneratorIndex;
    
    ATresE_ex773_Eclipse13_LandingPoint();
    UFUNCTION(BlueprintPure)
    int32 GetIndex();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SetDisableLandingPointNavmesh(bool bDisable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SetActive(bool B);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_LengthRate(float Rate);
    
};

