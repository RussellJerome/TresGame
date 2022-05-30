#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawn_e_dw405.h"
#include "TresEnemyPawn_e_dw405_Avatar.generated.h"

UCLASS(HideDropdown)
class ATresEnemyPawn_e_dw405_Avatar : public ATresEnemyPawn_e_dw405 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableNegativeVoiceMovementTick: 1;
    
    ATresEnemyPawn_e_dw405_Avatar();
};

