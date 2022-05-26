#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "DebrisDetails_e_he903_DebrisLand.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FDebrisDetails_e_he903_DebrisLand {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_rShotAngleOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bHoming;
    
    TRESGAME_API FDebrisDetails_e_he903_DebrisLand();
};

