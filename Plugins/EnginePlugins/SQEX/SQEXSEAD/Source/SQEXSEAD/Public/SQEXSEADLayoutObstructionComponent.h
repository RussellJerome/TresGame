#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SQEXSEADLayoutObstructionInfo.h"
#include "SQEXSEADLayoutObstructionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADLayoutObstructionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSQEXSEADLayoutObstructionInfo ObstructionInfo;
    
    USQEXSEADLayoutObstructionComponent();
};

