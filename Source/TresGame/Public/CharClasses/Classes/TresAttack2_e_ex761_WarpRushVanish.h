#pragma once
#include "CoreMinimal.h"
#include "TresAttack2_e_ex761_WarpRushBase.h"
#include "TresAttack2_e_ex761_WarpRushVanish.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex761_WarpRushVanish : public UTresAttack2_e_ex761_WarpRushBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_RushTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndDistance;
    
public:
    UTresAttack2_e_ex761_WarpRushVanish();
};

