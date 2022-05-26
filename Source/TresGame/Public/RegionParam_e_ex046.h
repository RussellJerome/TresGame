#pragma once
#include "CoreMinimal.h"
#include "RegionParam_e_ex046.generated.h"

USTRUCT(BlueprintType)
struct FRegionParam_e_ex046 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName BreakEffectSpawnBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FName BreakMaterialParamName;
    
    UPROPERTY(EditDefaultsOnly)
    FName BodyCollGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName BaseDataTableIDName;
    
    UPROPERTY(EditDefaultsOnly)
    FName LockOnTargetTagName;
    
    TRESGAME_API FRegionParam_e_ex046();
};

