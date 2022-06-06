#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/RichCurve.h"
#include "MovieSceneAtomSectionTemplateData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FMovieSceneAtomSectionTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY()
    USoundAtomCue* Sound;
    
    UPROPERTY()
    float AtomStartOffset;
    
    UPROPERTY()
    FFloatRange AtomRange;
    
    UPROPERTY()
    FRichCurve AtomPitchMultiplierCurve;
    
    UPROPERTY()
    FRichCurve AtomVolumeCurve;
    
    UPROPERTY()
    int32 RowIndex;
    
    CRIWARERUNTIME_API FMovieSceneAtomSectionTemplateData();
};

