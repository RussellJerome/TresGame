#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresBladeTornadoInfo_e_ex301a.h"
#include "TresAttack_e_ex301a_BladeTornadoBase.generated.h"

class ATresProjectile_XIIIE_BladeTornadoForTackle;

UCLASS(HideDropdown)
class UTresAttack_e_ex301a_BladeTornadoBase : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_XIIIE_BladeTornadoForTackle> m_BladeTornadoForTackleClass;
    
    UPROPERTY(EditDefaultsOnly)
    FTresBladeTornadoInfo_e_ex301a m_Phase1Info;
    
    UPROPERTY(EditDefaultsOnly)
    FTresBladeTornadoInfo_e_ex301a m_Phase2Info;
    
    UPROPERTY(EditDefaultsOnly)
    FTresBladeTornadoInfo_e_ex301a m_Phase3Info;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MissCameraExcludeAngle;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsSpawnMaxNum: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnMaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsRush: 1;
    
    UTresAttack_e_ex301a_BladeTornadoBase();
};

