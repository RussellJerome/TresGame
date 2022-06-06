#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Matinee/InterpTrackInst.h"
#include "UObject/NoExportTypes.h"
#include "TresInterpTrackInstSceneCapture2D.generated.h"

class AActor;

UCLASS()
class TRESGAME_API UTresInterpTrackInstSceneCapture2D : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_ViewTarget;
    
    UPROPERTY()
    FVector m_CamLocation;
    
    UPROPERTY()
    FRotator m_CamRotation;
    
    UPROPERTY()
    float m_FOV;
    
    UPROPERTY()
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstSceneCapture2D();
};

