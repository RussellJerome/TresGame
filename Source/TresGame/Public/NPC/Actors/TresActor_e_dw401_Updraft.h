#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_dw401_Updraft.generated.h"

class ATresWaterCurrentSplineActor;
class UCapsuleComponent;

UCLASS()
class ATresActor_e_dw401_Updraft : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* MyUpdraftComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_UpdraftSplineClass;
    
public:
    ATresActor_e_dw401_Updraft();
};

