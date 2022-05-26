#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "UObject/NoExportTypes.h"
#include "TresSceneCapture2D.generated.h"

class UTresInterpTrackInstSceneCapture2D;

UCLASS()
class TRESGAME_API ATresSceneCapture2D : public ASceneCapture2D {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UTresInterpTrackInstSceneCapture2D* m_SceneCapture2DTrackInst;
    
    UPROPERTY(Transient)
    bool m_Dirty;
    
    ATresSceneCapture2D();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SetupMirror(FVector V);
    
};

