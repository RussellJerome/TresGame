#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "TresLookAtSubBoneParam.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLookAtSubBoneParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FBoneReference m_Bone;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_RotLimitMin;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_RotLimitMax;
    
    FTresLookAtSubBoneParam();
};

