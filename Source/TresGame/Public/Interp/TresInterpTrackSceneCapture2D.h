#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresInterpTrackSceneCapture2DKey.h"
#include "TresInterpTrackSceneCapture2D.generated.h"

class ATresSceneCapture2D;

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackSceneCapture2D : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_UseTresSceneManager;
    
    UPROPERTY(EditAnywhere)
    ATresSceneCapture2D* m_SceneCapture2D;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackSceneCapture2DKey> m_Keys;
    
    UTresInterpTrackSceneCapture2D();
};

