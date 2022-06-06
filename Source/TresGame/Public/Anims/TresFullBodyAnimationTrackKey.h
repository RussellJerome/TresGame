#pragma once
#include "CoreMinimal.h"
#include "TresFullBodyAnimationTrackKey.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FTresFullBodyAnimationTrackKey {
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
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float AnimStartOffset;
    
    UPROPERTY(EditAnywhere)
    float AnimEndOffset;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    bool Loop;
    
    UPROPERTY(EditAnywhere)
    int32 EffectGroup;
    
    UPROPERTY(EditAnywhere)
    bool Reverse;
    
    UPROPERTY(EditAnywhere)
    bool RootTrans;
    
    UPROPERTY(EditAnywhere)
    bool RootRotate;
    
    UPROPERTY(EditAnywhere)
    bool DisableRootTransExtract;
    
    UPROPERTY(EditAnywhere)
    float RootMoveScaleXY;
    
    UPROPERTY(EditAnywhere)
    float RootMoveScaleZ;
    
    UPROPERTY(EditAnywhere)
    float MeshScale;
    
    UPROPERTY(EditAnywhere)
    bool BonamikReset;
    
    UPROPERTY(EditAnywhere)
    int32 BonamikPreRoll;
    
    UPROPERTY(EditAnywhere)
    int32 BonamikPreRollForAttachment;
    
    UPROPERTY(EditAnywhere)
    bool SimulateMotionBuilderClip;
    
    UPROPERTY(EditAnywhere)
    float MotionBuilderClipFirstLoop;
    
    UPROPERTY(EditAnywhere)
    float MotionBuilderClipStop;
    
    UPROPERTY(EditAnywhere)
    int32 ForcedLOD;
    
    TRESGAME_API FTresFullBodyAnimationTrackKey();
};

