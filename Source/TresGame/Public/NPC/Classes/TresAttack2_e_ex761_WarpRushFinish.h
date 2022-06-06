#pragma once
#include "CoreMinimal.h"
#include "TresAttack2_e_ex761_WarpRushBase.h"
#include "TresAttack2_e_ex761_WarpRushFinish.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex761_WarpRushFinish : public UTresAttack2_e_ex761_WarpRushBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_RushTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishStartDistance;
    
public:
    UTresAttack2_e_ex761_WarpRushFinish();
};

