#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_RigidBody.generated.h"

class UPhysicsAsset;

USTRUCT(BlueprintType)
struct IMMEDIATEPHYSICS_API FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* OverridePhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    FVector OverrideWorldGravity;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    
    UPROPERTY(EditAnywhere)
    bool bEnableWorldGeometry;
    
    UPROPERTY(EditAnywhere)
    bool bComponentSpaceSimulation;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideWorldGravity;
    
    UPROPERTY(EditAnywhere)
    float CachedBoundsScale;
    
    FAnimNode_RigidBody();
};

