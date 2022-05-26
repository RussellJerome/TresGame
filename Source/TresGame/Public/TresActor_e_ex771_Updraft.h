#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_ex771_Updraft.generated.h"

class UCurveFloat;
class ATresProjectileBase;
class ATresWaterCurrentSplineActor;
class UCapsuleComponent;

UCLASS()
class ATresActor_e_ex771_Updraft : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveFloat* m_ForceRateCurve;
    
    UPROPERTY()
    ATresProjectileBase* m_Projectile;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* MyUpdraftComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_UpdraftSplineClass;
    
public:
    ATresActor_e_ex771_Updraft();
};

