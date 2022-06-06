#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresEnemyEx773_AttractParam.h"
#include "TresAttack13_e_ex773_Explosion.generated.h"

class ATresProjectile_e_ex773_ExplosionOmen;
class ATresActor_e_ex773_Attract;

UCLASS(HideDropdown)
class UTresAttack13_e_ex773_Explosion : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx773_AttractParam> m_AttractParamArray;
    
    UPROPERTY()
    ATresProjectile_e_ex773_ExplosionOmen* m_ExplosionOmen;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_Attract> m_pro_AttractClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DefaultEffectGroup;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExExplosionOmenLifeTime;
    
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
    
public:
    UTresAttack13_e_ex773_Explosion();
};

