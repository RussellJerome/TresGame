#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresE_EX781MarkerShotParam.h"
#include "TresAttack3_e_ex781_BackStepGunShot.generated.h"

class ATresEnemyPawn_e_ex781_GunShotMarker;
class ATresProjectileBase;
class ATresPawnBase;

UCLASS()
class UTresAttack3_e_ex781_BackStepGunShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ShotCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPawnBase> m_GunShotMarkerObjectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_EX781MarkerShotParam> m_MarkerShotList;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex781_GunShotMarker* m_GunShotMarkerObject;
    
public:
    UTresAttack3_e_ex781_BackStepGunShot();
};

