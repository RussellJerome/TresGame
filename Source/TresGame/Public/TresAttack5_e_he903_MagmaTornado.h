#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "ProjectileSpawnInfo.h"
#include "TornadoBlowSet.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack5_e_he903_MagmaTornado.generated.h"

class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack5_e_he903_MagmaTornado : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile_Up;
    
    UPROPERTY(EditDefaultsOnly)
    FProjectileSpawnInfo m_ProjectileInfo[3];
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_PlaneProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPlaneProjectileOffset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxLoopMotionCount;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vWarpLocation_LocalOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vWarpLocation_World;
    
    UPROPERTY(EditAnywhere)
    bool bWorldWarpLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FTornadoBlowSet m_BlowSet;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bToIceTornado;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttackDefinitionBase> m_IceTornadoDefinition;
    
    UTresAttack5_e_he903_MagmaTornado();
};

