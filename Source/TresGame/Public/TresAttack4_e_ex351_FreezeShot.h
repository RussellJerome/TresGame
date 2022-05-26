#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyex351ProjectileSpawnInfo.h"
#include "TresAttack_e_ex351_Base.h"
#include "TresAttack4_e_ex351_FreezeShot.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex351_FreezeShot : public UTresAttack_e_ex351_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FreezeShotAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnAngle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyex351ProjectileSpawnInfo> m_SpawnInfos;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_FreezeShotProjectileClass;
    
    UTresAttack4_e_ex351_FreezeShot();
};

