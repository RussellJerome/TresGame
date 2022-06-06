#pragma once
#include "CoreMinimal.h"
#include "ETresSplineAnchorInterpType.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAnimNode_SplineAnchor.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_SplineAnchor : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsAnchorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_TargetLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FBoneReference m_EffectNode;
    
    UPROPERTY(EditDefaultsOnly)
    FBoneReference m_BaseNode;
    
    UPROPERTY(EditDefaultsOnly)
    ETresSplineAnchorInterpType m_InterpType;
    
    UPROPERTY()
    FInterpCurveVector m_InterpLocationInfo;
    
    FTresAnimNode_SplineAnchor();
};

