#pragma once
#include "CoreMinimal.h"
#include "BonePhysicsBlendRateData_e_ex816.h"
#include "BonePhysicsBlendRateDataList_e_ex816.generated.h"

USTRUCT(BlueprintType)
struct FBonePhysicsBlendRateDataList_e_ex816 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FBonePhysicsBlendRateData_e_ex816> List;
    
    TRESGAME_API FBonePhysicsBlendRateDataList_e_ex816();
};

