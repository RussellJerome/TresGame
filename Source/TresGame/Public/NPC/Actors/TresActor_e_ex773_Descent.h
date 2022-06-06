#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_ex773_Descent.generated.h"

class UCurveFloat;
class ATresWaterCurrentSplineActor;
class UCapsuleComponent;

UCLASS()
class ATresActor_e_ex773_Descent : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveFloat* m_ForceRateCurve;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* MyDescentComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_DescentSplineClass;
    
public:
    ATresActor_e_ex773_Descent();
};

