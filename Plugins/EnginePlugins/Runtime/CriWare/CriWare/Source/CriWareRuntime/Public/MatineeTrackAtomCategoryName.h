#pragma once
#include "CoreMinimal.h"
#include "MatineeTrackAtomBase.h"
#include "MatineeTrackAtomCategoryName.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMatineeTrackAtomCategoryName : public UMatineeTrackAtomBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString CategoryName;
    
    UPROPERTY(EditAnywhere)
    bool bEnableVolumeTrack;
    
    UMatineeTrackAtomCategoryName();
};

