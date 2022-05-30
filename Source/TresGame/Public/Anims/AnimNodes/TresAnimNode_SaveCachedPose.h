#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "TresAnimNode_SaveCachedPose.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_SaveCachedPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    FTresAnimNode_SaveCachedPose();
};

