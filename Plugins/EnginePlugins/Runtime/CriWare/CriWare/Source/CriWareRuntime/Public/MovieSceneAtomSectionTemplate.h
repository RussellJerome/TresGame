#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAtomSectionTemplateData.h"
#include "MovieSceneAtomSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneAtomSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneAtomSectionTemplateData AtomData;
    
    CRIWARERUNTIME_API FMovieSceneAtomSectionTemplate();
};

