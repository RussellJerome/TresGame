#pragma once
#include "CoreMinimal.h"
#include "TresFaceAnimationTrackKey.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FTresFaceAnimationTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float Time;
    
    UPROPERTY(Transient)
    FName AnimName;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* AnimAsset;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    bool Loop;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    float AnimStartOffset;
    
    UPROPERTY(EditAnywhere)
    float AnimEndOffset;
    
    UPROPERTY(EditAnywhere)
    bool SimulateMotionBuilderClip;
    
    UPROPERTY(EditAnywhere)
    float MotionBuilderClipFirstLoop;
    
    UPROPERTY(EditAnywhere)
    float MotionBuilderClipStop;
    
    TRESGAME_API FTresFaceAnimationTrackKey();
};

