#pragma once
#include "CoreMinimal.h"
#include "MatineeTrackAtomSoundBase.h"
#include "AtomCueIdTrackKeyframe.h"
#include "MatineeTrackAtomCueId.generated.h"

class USoundAtomCueSheet;

UCLASS(CollapseCategories, MinimalAPI)
class UMatineeTrackAtomCueId : public UMatineeTrackAtomSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> AisacList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> SelectorList;
    
    UPROPERTY(EditAnywhere)
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FAtomCueIdTrackKeyframe> KeyframeList;
    
    UMatineeTrackAtomCueId();
};

