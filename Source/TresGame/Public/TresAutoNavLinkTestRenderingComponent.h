#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresAutoNavLinkTestRenderingComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresAutoNavLinkTestRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UTresAutoNavLinkTestRenderingComponent();
};

