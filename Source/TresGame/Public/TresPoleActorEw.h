#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPoleActorEw.generated.h"

class USceneComponent;
class UTresPoleComponent;

UCLASS(Config=Game)
class ATresPoleActorEw : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MyRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresPoleComponent* PoleComponentDefault;
    
    ATresPoleActorEw();
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsEnable() const;
    
};

