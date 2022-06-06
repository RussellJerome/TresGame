#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "MatineeTrackAtomBase.generated.h"

UCLASS(Abstract, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomBase : public UInterpTrack {
    GENERATED_BODY()
public:
    UMatineeTrackAtomBase();
};

