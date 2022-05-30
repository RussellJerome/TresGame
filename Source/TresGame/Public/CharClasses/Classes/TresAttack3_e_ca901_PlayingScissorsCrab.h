#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ca901_Base.h"
#include "TresAttack3_e_ca901_PlayingScissorsCrab.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ca901_PlayingScissorsCrab : public UTresAttack_e_ca901_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
public:
    UTresAttack3_e_ca901_PlayingScissorsCrab();
};

