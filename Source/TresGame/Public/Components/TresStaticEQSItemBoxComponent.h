#pragma once
#include "CoreMinimal.h"
#include "TresStaticEQSItemComponentInterface.h"
#include "Components/BoxComponent.h"
#include "TresStaticEQSItemBoxComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresStaticEQSItemBoxComponent : public UBoxComponent, public ITresStaticEQSItemComponentInterface {
    GENERATED_BODY()
public:
    UTresStaticEQSItemBoxComponent();
    
    // Fix for true pure virtual functions not being implemented
};

