#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex701_SpawnTarHandBase.h"
#include "TresAttack8_e_ex701_SpawnTarHandNearFar.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack8_e_ex701_SpawnTarHandNearFar : public UTresAttack_e_ex701_SpawnTarHandBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Range;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NearHandRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HandDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpdateTargetLocationTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_CriteriaEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CriteriaEQSIntervalTime;
    
public:
    UTresAttack8_e_ex701_SpawnTarHandNearFar();
};

