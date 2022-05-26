#pragma once
#include "CoreMinimal.h"
#include "MatineeTrackAtomBase.h"
#include "MatineeTrackAtomSoundBase.generated.h"

UCLASS(Abstract, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomSoundBase : public UMatineeTrackAtomBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bContinueSoundOnMatineeEnd;
    
    UMatineeTrackAtomSoundBase();
};

