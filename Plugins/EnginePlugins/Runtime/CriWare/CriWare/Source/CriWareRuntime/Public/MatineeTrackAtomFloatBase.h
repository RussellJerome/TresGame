#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "MatineeTrackAtomFloatBase.generated.h"

UCLASS(Abstract, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomFloatBase : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UMatineeTrackAtomFloatBase();
};

