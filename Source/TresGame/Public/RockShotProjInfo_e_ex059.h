#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RockShotProjInfo_e_ex059.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FRockShotProjInfo_e_ex059 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinShotPitch;
    
    TRESGAME_API FRockShotProjInfo_e_ex059();
};

