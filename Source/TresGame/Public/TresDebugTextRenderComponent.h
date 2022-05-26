#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "TresDebugTextRenderComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDebugTextRenderComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float SphereMoveSize;
    
    UTresDebugTextRenderComponent();
};

