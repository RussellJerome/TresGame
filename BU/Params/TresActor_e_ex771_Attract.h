#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_ex771_Attract.generated.h"

class ATresWaterCurrentSplineActor;
class UCapsuleComponent;

UCLASS()
class ATresActor_e_ex771_Attract : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* MyAttractComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_AttractSplineClass;
    
public:
    ATresActor_e_ex771_Attract();
};

