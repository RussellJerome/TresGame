#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceProxy.h"
#include "TresAnimInstanceProxy.generated.h"

class UAnimSequenceBase;

USTRUCT()
struct TRESGAME_API FTresAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FA2Pose MySavedPose;
    
    UPROPERTY(Transient)
    UAnimSequenceBase* m_pInitialPoseSeq;

    FTresAnimInstanceProxy();
};

