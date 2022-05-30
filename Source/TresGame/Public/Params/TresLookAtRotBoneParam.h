#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "TresLookAtRotBoneParam.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLookAtRotBoneParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FBoneReference m_Bone;
    
    UPROPERTY(EditDefaultsOnly)
    float m_YawCoefficientData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchCoefficientData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ParamACoefficientData;
    
    FTresLookAtRotBoneParam();
};

