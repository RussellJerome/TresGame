#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresProjectileAssetUnit.h"
#include "TresProjectileSet.generated.h"

UCLASS()
class UTresProjectileSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresProjectileAssetUnit> Projectiles;
    
    UTresProjectileSet();
};

