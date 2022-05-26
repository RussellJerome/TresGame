#pragma once
#include "CoreMinimal.h"
#include "MatineeTrackAtomSoundBase.h"
#include "AtomCueNameTrackKeyframe.h"
#include "MatineeTrackAtomCueName.generated.h"

class USoundAtomCueSheet;

UCLASS(CollapseCategories, MinimalAPI)
class UMatineeTrackAtomCueName : public UMatineeTrackAtomSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> AisacList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> SelectorList;
    
    UPROPERTY(EditAnywhere)
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FAtomCueNameTrackKeyframe> KeyframeList;
    
    UMatineeTrackAtomCueName();
};

