#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"
#include "BoneContainer.h"
#include "TresAnimNode_ExDropWaist.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_ExDropWaist : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(EditAnywhere)
    FBoneReference m_EffectBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DropSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DropDetectHeightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DropDetectHeightMin;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> m_IKBones;
    
    FTresAnimNode_ExDropWaist();
};

