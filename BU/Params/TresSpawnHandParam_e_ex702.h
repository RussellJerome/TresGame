#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSpawnHandParam_e_ex702.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresSpawnHandParam_e_ex702 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Num;
    
    UPROPERTY(EditDefaultsOnly)
    float MinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxRadius;
    
    TRESGAME_API FTresSpawnHandParam_e_ex702();
};

