#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex773_Eclipse13Base.h"
#include "TresAttack_e_ex773_Eclipse13WarpBattlePoint.generated.h"

UCLASS(HideDropdown)
class UTresAttack_e_ex773_Eclipse13WarpBattlePoint : public UTresAttack_e_ex773_Eclipse13Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ForceWarpPoint;
    
    UPROPERTY(EditDefaultsOnly)
    float GapTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bLastWarp;
    
    UTresAttack_e_ex773_Eclipse13WarpBattlePoint();
};

