#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SQEXSEADVolumeInfo.h"
#include "SQEXSEADVolumeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSQEXSEADVolumeInfo VolumeInfo;
    
    USQEXSEADVolumeComponent();
};

