#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "TresAnimNode_ModifyBoneCurveParam.h"
#include "TresAnimNode_ModifyBoneCurve.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_ModifyBoneCurve : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CurvePosition;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresAnimNode_ModifyBoneCurveParam> m_InterpParams;
    
    FTresAnimNode_ModifyBoneCurve();
};

