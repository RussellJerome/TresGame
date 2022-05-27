#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "BX901_DarkCubeMineSpawnInfo.h"
#include "TresAttack5_e_bx901_DrakCubeShotMulti.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_bx901_DrakCubeShotMulti : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FBX901_DarkCubeMineSpawnInfo> m_ProjSpawnInfoArray;
    
    UTresAttack5_e_bx901_DrakCubeShotMulti();
};

