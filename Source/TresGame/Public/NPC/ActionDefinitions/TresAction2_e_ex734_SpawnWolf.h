#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "WolfSpawnInfo_e_ex734.h"
#include "TresAction2_e_ex734_SpawnWolf.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex734_SpawnWolf : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FWolfSpawnInfo_e_ex734 m_WolfSpawnInfo;
    
    UTresAction2_e_ex734_SpawnWolf();
};

