#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "TresLookAtEyeBoneParam.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLookAtEyeBoneParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FBoneReference m_Bone;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_RotLimitMin;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_RotLimitMax;
    
    FTresLookAtEyeBoneParam();
};

