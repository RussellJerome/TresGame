#pragma once
#include "CoreMinimal.h"
#include "TresAction1_XIIILE_LeaderChangeWarpStart.h"
#include "TresAction2_e_ex351_WarpStart.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex351_WarpStart : public UTresAction1_XIIILE_LeaderChangeWarpStart {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAfterImageWarp: 1;
    
    UTresAction2_e_ex351_WarpStart();
};

