#pragma once
#include "CoreMinimal.h"
#include "TresLookAtEyeBoneParam.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "TresLookAtRotBoneParam.h"
#include "TresAnimNode_ExLookAt.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_ExLookAt : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference m_LookAtBaseBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_LookAtBaseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtParamA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsDirectLook: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_RotationLimitDegMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_RotationLimitDegMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotationBackMarginDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotationSpeedDeg;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresLookAtRotBoneParam> m_RotBones;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresLookAtEyeBoneParam> m_EyeBones;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 m_LodLimit;
    
    FTresAnimNode_ExLookAt();
};

