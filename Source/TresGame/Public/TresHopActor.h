#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresHopActor.generated.h"

class UBoxComponent;
class USceneComponent;
class UTresHopComponent;

UCLASS(Config=Game)
class ATresHopActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresHopComponent* MyHop;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(EditAnywhere)
    float CheckLength;
    
    UPROPERTY(EditAnywhere)
    float CheckRange;
    
    UPROPERTY(VisibleAnywhere)
    int32 HopID;
    
public:
    ATresHopActor();
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsEnable() const;
    
};

