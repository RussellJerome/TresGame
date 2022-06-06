#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "TresLookAtSubBoneParam.h"
#include "TresAnimNode_LookAt.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_LookAt : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationLimitMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationLimitMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresLookAtSubBoneParam> m_SubBones;
    
    FTresAnimNode_LookAt();
};

