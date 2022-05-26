#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack8_e_ex360_KBRideCircleBlizzard.generated.h"

class ATresProjectileBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack8_e_ex360_KBRideCircleBlizzard : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_shotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletShotLoopNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BulletShotLoopInterval;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_MoveEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSubSpeed;
    
    UTresAttack8_e_ex360_KBRideCircleBlizzard();
};

