#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzlePlayerState.generated.h"

UENUM(BlueprintType)
enum WinniePuzzlePlayerState {
    Player_State_Entry,
    Player_State_Idle,
    Player_State_Walk,
    Player_State_Run,
    Player_State_Turn,
    Player_State_Prepare_Shot,
    Player_State_Shot,
    Player_State_Roll,
    Player_State_Wait_Harvest,
    Player_State_Greeting,
    Player_State_Success,
    Player_State_Failure,
    Player_State_None = 0xFF,
    Player_State_MAX UMETA(Hidden),
};

