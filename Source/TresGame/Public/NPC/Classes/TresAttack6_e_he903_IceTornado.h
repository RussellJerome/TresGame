#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TornadoBlowSet.h"
#include "UObject/NoExportTypes.h"
#include "EIceProjectileDestroyType_e_he903.h"
#include "TresAttack6_e_he903_IceTornado.generated.h"

class ATresProjectile_e_he902_IceStomp;
class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack6_e_he903_IceTornado : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_he902_IceStomp> m_ProjectileManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vAttackStartOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxAttackCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackMargin;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Bullet;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBulletSpawnMinDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EIceProjectileDestroyType_e_he903> m_ProjDestroyType;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBulletSpawnLocVariance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEQSMaxWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBulletInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBulletEvadeOffset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iHomingBulletDenominator;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iHomingBulletCountOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vWarpLocation_LocalOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vWarpLocation_World;
    
    UPROPERTY(EditAnywhere)
    bool bWorldWarpLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBlowVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    FTornadoBlowSet m_BlowSet;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bToMagmaTornado;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttackDefinitionBase> m_MagmaTornadoDefinition;
    
protected:
    UPROPERTY()
    TArray<ATresProjectileBase*> m_ProjectileArray;
    
public:
    UTresAttack6_e_he903_IceTornado();
};

