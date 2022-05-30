#pragma once
#include "CoreMinimal.h"
#include "TresSkeletalMeshComponent.h"
#include "TresPhotoHologramSkeletalMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPhotoHologramSkeletalMeshComponent : public UTresSkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 BonamikPreRoll;
    
    UPROPERTY(EditAnywhere)
    bool StopBonamik;
    
    UTresPhotoHologramSkeletalMeshComponent();
};

