#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotSet.h"
#include "UObject/NoExportTypes.h"
#include "EX354_ArtemaWarpShotSequence_ProjectileInfo.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotSequence_ProjectileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX354_ArtemaWarpShotSet m_ShotSet;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vSpawnLocOffset;
    
    UPROPERTY()
    ATresProjectileBase* m_Spawner;
    
    TRESGAME_API FEX354_ArtemaWarpShotSequence_ProjectileInfo();
};

