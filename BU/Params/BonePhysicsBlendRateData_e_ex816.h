#pragma once
#include "CoreMinimal.h"
#include "BonePhysicsBlendRateData_e_ex816.generated.h"

USTRUCT(BlueprintType)
struct FBonePhysicsBlendRateData_e_ex816 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName BoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float PhysicsBlendRate;
    
    UPROPERTY(EditDefaultsOnly)
    float StartInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float EndInterpTime;
    
    TRESGAME_API FBonePhysicsBlendRateData_e_ex816();
};

