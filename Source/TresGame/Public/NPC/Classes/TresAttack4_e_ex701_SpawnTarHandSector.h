#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex701_SpawnTarHandBase.h"
#include "TresAttack4_e_ex701_SpawnTarHandSector.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack4_e_ex701_SpawnTarHandSector : public UTresAttack_e_ex701_SpawnTarHandBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Angle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Range;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpdateTargetLocationTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_CriteriaEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CriteriaEQSIntervalTime;
    
public:
    UTresAttack4_e_ex701_SpawnTarHandSector();
};

