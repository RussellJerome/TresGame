#pragma once
#include "CoreMinimal.h"
#include "TresSurroundDarkMineSpawnParams_e_ex352.h"
#include "TresAttack_XIIILE_Base.h"
#include "TresAttack7_e_ex352_SurroundDarkMine.generated.h"

UCLASS(HideDropdown)
class UTresAttack7_e_ex352_SurroundDarkMine : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FTresSurroundDarkMineSpawnParams_e_ex352 m_SurroundDarkMineSpawnParam;
    
public:
    UTresAttack7_e_ex352_SurroundDarkMine();
};

