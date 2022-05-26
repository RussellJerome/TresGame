#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresEnemyEx771_AttractBT04Param.h"
#include "TresAttack20_e_ex771_ExplosionBT04.generated.h"

class ATresActor_e_ex771_Attract;
class ATresProjectileGenerator_e_ex771_HvnDebris;
class ATresProjectile_e_ex771_ExplosionOmen;
class ATresProjectileGenerator_e_ex771_HvnDebrisBlow;
class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack20_e_ex771_ExplosionBT04 : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx771_AttractBT04Param> m_AttractParamArray;
    
    UPROPERTY()
    ATresProjectile_e_ex771_ExplosionOmen* m_ExplosionOmen;
    
    UPROPERTY()
    ATresProjectileGenerator_e_ex771_HvnDebris* m_HvnDebrisGenerator;
    
    UPROPERTY()
    ATresProjectileGenerator_e_ex771_HvnDebrisBlow* m_HvnDebrisBlowGenerator;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_DebrisConvEff;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_Attract> m_pro_AttractClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExExplosionOmenLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExExplosionOmen2LifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExNotAttractRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExAttractForce;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExAttractForce2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFarstEncloseFlareChantTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExEncloseFlareChantTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExEncloseFlareInvoTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExZHomingRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExZHomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExOmenTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExOmenEffEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExBombWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExBindDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExBindHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExBindTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExBindAfterTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExEncloseFlareHitExplosionStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExExplosionOmenHitExplosionStTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_DebrisSpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DebrisSpawnInterval;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex771_HvnDebris> m_pro_HvnDebrisGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_DebrisConvEffData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_LivelyDebrisBlowSpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DebrisBlowMoveMinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DebrisBlowMoveMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DebrisBlowMinScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DebrisBlowMaxScale;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex771_HvnDebrisBlow> m_pro_HvnDebrisBlowGeneratorClass;
    
public:
    UTresAttack20_e_ex771_ExplosionBT04();
};

