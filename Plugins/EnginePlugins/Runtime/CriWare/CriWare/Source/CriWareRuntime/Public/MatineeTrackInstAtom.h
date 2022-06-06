#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "MatineeTrackInstAtom.generated.h"

class UAtomComponent;
class UMatineeTrackAtomSoundBase;

UCLASS()
class UMatineeTrackInstAtom : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UPROPERTY(Export, Transient)
    UAtomComponent* AtomComponent;
    
    UPROPERTY(Transient)
    UMatineeTrackAtomSoundBase* AtomTrack;
    
    UMatineeTrackInstAtom();
};

