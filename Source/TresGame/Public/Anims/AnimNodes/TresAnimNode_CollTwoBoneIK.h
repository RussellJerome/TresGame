#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "ETresIkCollision.h"
#include "TresAnimNode_CollTwoBoneIK.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_CollTwoBoneIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference IKBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector JointTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EffectorSpaceBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bTakeRotationFromEffectorSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bMaintainEffectorRelRot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowStretching: 1;
    
    UPROPERTY()
    FVector2D StretchLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartStretchRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxStretchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName JointTargetSpaceBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bMaintainEffectorHitNormal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaintainEffectorLimitRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaintainEffectorStartInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaintainEffectorEndInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresIkCollision::Type> CollisionShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CollisionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator CollisionRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CheckMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CheckMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IkOffset;
    
    FTresAnimNode_CollTwoBoneIK();
};

