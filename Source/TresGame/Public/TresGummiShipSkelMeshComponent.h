#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "TresGummiShipSkelMeshComponent.generated.h"

class UTresGummiShipAnimInstance;

UCLASS(EditInlineNew, MinimalAPI, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGummiShipSkelMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(NonTransactional, Transient)
    UTresGummiShipAnimInstance* MyAnimInstance;
    
public:
    UTresGummiShipSkelMeshComponent();
};

