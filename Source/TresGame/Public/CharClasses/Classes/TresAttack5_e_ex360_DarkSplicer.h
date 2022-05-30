#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "DarkSplicerTypes_e_ex360.h"
#include "TresAttack5_e_ex360_DarkSplicer.generated.h"

class UEnvQuery;
class ATresProjectileBase;
class ATresEnemyPawn_e_ex360;

UCLASS(HideDropdown)
class UTresAttack5_e_ex360_DarkSplicer : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<DarkSplicerTypes_e_ex360> m_Type;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinShotIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinShotPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinShotYaw;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DontToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinTargetShotIntervalTimeMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinTargetShotIntervalTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpPosOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotHitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseRate;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex360* m_AvaterPawn;
    
public:
    UTresAttack5_e_ex360_DarkSplicer();
};

