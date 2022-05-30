#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "TresTwoBoneLegIKDefinition.h"
#include "MaskedJointChain.h"
#include "PDControllerScalar.h"
#include "TresAnimNode_TwoBoneIKMultiped.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_TwoBoneIKMultiped : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseMayaSolver;
    
    UPROPERTY(EditAnywhere)
    FBoneReference HipsTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HipsOffsetPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HipsRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HipsRotationResetLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bLimitHipsTransHeight: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bExHitpsRotateDetect: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 ExHitpsRotateDetectSampleNum;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExHitpsRotateDetectRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExHitpsRotateDetectCheckMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExHitpsRotateDetectCheckMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTresTwoBoneLegIKDefinition> IKDefs;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaskedJointChain> MaskedJointChains;
    
    UPROPERTY()
    float MyDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RaycastCacheMaximumTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RaycastCacheMaximumRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RaycastForceFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_RaycastCacheRootDisplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_KeepHighestRaycastHitInSmallRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_KeepHighest_XY_MaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_KeepHighest_Z_Displacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootSmoothingVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeStartSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPDControllerScalar HipsController;
    
    FTresAnimNode_TwoBoneIKMultiped();
};

