#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "Curves/RichCurve.h"
#include "MovieSceneAtomSection.generated.h"

class USoundAtomCue;

UCLASS(MinimalAPI)
class UMovieSceneAtomSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USoundAtomCue* Sound;
    
    UPROPERTY(EditAnywhere)
    float StartOffset;
    
    UPROPERTY(EditAnywhere)
    FRichCurve SoundVolume;
    
    UPROPERTY(EditAnywhere)
    FRichCurve PitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressSubtitles;
    
public:
    UMovieSceneAtomSection();
};

