#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SQEXSEADLayoutInfo.h"
#include "SQEXSEADLayoutComponent.generated.h"

class USoundBase;
class USQEXSEADLayoutAudioComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADLayoutComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(EditAnywhere)
    FSQEXSEADLayoutInfo LayoutInfo;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreObstruction: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideInteriorFactor: 1;
    
    UPROPERTY(EditAnywhere)
    float InteriorFactor;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    float FadeTime;
    
private:
    UPROPERTY(Export, Transient)
    USQEXSEADLayoutAudioComponent* AudioComponent;
    
public:
    USQEXSEADLayoutComponent();
};

