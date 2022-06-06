#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack7_e_ex773_Flare.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack7_e_ex773_Flare : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_FlareEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlareSpawnPosRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BombTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SpawnOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WallHitHoseiRange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bZDirHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AttractTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AttractRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AttractForce;
    
public:
    UTresAttack7_e_ex773_Flare();
};

