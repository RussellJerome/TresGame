#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileAssetUnit.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresProjectileAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName ProjectileName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> ProjectileData;
    
    TRESGAME_API FTresProjectileAssetUnit();
};

