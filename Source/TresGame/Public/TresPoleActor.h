#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPoleActor.generated.h"

class UTresPoleComponent;

UCLASS(Config=Game)
class ATresPoleActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresPoleComponent* MyRoot;
    
public:
    ATresPoleActor();
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsEnable() const;
    
};

