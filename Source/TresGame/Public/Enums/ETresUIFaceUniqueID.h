#pragma once
#include "CoreMinimal.h"
#include "ETresUIFaceUniqueID.generated.h"

UENUM(BlueprintType)
enum class ETresUIFaceUniqueID : uint8 {
    TRES_FACE_UID_UNKNOWN,
    TRES_FACE_UID_LEON = 0x96,
    TRES_FACE_UID_AERITH,
    TRES_FACE_UID_YUFFIE,
    TRES_FACE_UID_CID,
    TRES_FACE_UID_MAX UMETA(Hidden),
};

