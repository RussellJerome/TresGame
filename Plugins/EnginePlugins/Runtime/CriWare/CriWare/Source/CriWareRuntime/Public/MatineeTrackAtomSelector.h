#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "AtomSelectorTrackKeyframe.h"
#include "MatineeTrackAtomSelector.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMatineeTrackAtomSelector : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FAtomSelectorTrackKeyframe> KeyframeList;
    
    UMatineeTrackAtomSelector();
};

