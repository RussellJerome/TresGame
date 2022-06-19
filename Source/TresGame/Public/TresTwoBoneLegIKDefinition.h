#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "CommonAnimTypes.h"
#include "ETresIkCollision.h"
#include "TresTwoBoneLegIKDefinition.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresTwoBoneLegIKDefinition {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUseMayaSolver;
    
    UPROPERTY(EditAnywhere)
    FBoneReference IKBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector JointTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EffectorSpaceBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTakeRotationFromEffectorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMaintainEffectorRelRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowStretching;
    
    UPROPERTY(EditAnywhere)
    float StartStretchRatio;
    
    UPROPERTY(EditAnywhere)
    float MaxStretchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName JointTargetSpaceBoneName;
    
    UPROPERTY(EditAnywhere)
    bool bAllowTwist;
    
    UPROPERTY(EditAnywhere)
    FAxis TwistAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMaintainEffectorHitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaintainEffectorLimitRotX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaintainEffectorLimitRotY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaintainEffectorLimitRotZ;
    
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
    uint32 ShouldMimicOtherLimbWhenNoCollision: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> LimbsToMimicWhenNoCollision;
    
    UPROPERTY(EditAnywhere)
    float LimitTwoBoneIkInternalAngle;
    
    UPROPERTY(EditAnywhere)
    uint32 ReturnEffectLocatonIfCollisionNoHit: 1;
    
    FTresTwoBoneLegIKDefinition();
};

