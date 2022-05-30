#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EX355_SwingWeaponGroundHitEffectInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FEX355_SwingWeaponGroundHitEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 m_iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* m_WeaponGroundHitEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector m_vSpawnLocOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bSpawnOnLandOnly;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fHeightFromLand;
    
    TRESGAME_API FEX355_SwingWeaponGroundHitEffectInfo();
};

