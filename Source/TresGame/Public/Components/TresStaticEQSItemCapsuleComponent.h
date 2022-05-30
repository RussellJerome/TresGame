#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "TresStaticEQSItemComponentInterface.h"
#include "TresStaticEQSItemCapsuleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresStaticEQSItemCapsuleComponent : public UCapsuleComponent, public ITresStaticEQSItemComponentInterface {
    GENERATED_BODY()
public:
    UTresStaticEQSItemCapsuleComponent();
    
    // Fix for true pure virtual functions not being implemented
};

