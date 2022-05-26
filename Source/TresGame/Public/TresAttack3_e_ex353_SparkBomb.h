#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex353_Base.h"
#include "TresEnemyEx353ProjectileSpawnInfo.h"
#include "TresAttack3_e_ex353_SparkBomb.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex353_SparkBomb : public UTresAttack_e_ex353_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_FristSparkBombProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx353ProjectileSpawnInfo> m_LeftSpawnInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx353ProjectileSpawnInfo> m_RightSpawnInfo;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEndHomingShutDown: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndHomingAfterLifeTime;
    
    UTresAttack3_e_ex353_SparkBomb();
};

