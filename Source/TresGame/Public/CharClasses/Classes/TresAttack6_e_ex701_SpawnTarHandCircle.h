#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex701_SpawnTarHandBase.h"
#include "TresAttack6_e_ex701_SpawnTarHandCircle.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex701_SpawnTarHandCircle : public UTresAttack_e_ex701_SpawnTarHandBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Range;
    
public:
    UTresAttack6_e_ex701_SpawnTarHandCircle();
};

