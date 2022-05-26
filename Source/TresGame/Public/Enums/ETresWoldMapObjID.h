#pragma once
#include "CoreMinimal.h"
#include "ETresWoldMapObjID.generated.h"

UENUM(BlueprintType)
enum class ETresWoldMapObjID : uint8 {
    WM_OBJ_ID00,
    WM_OBJ_SPACE_CENTER,
    WM_OBJ_BG,
    WM_OBJ_WORLD_SYMBOL,
    WM_OBJ_ID_TRAVEL,
    WM_OBJ_ID_TREASURE,
    WM_OBJ_ID_TERRITORY,
    WM_OBJ_WORLD_SYMBOL_DUMMY,
    WM_OBJ_WORLD_SYMBOL_PREVIEW,
    WM_OBJ_ID_JUMP_POINT,
    WM_OBJ_KG_MIST,
    WM_OBJ_TYPE_MAX UMETA(Hidden),
    WM_OBJ_MAX UMETA(Hidden),
};

