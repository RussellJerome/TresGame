#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "TresGumiShipSpringArmCompoBase.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipSpringArmCompoBase : public USpringArmComponent {
    GENERATED_BODY()
public:
    UTresGumiShipSpringArmCompoBase();
};

