#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_LinkType.generated.h"

UENUM(BlueprintType)
enum ESQEX_Bonamik_LinkType {
    ESQEX_Bonamik_LinkType_Lateral,
    ESQEX_Bonamik_LinkType_ParentChild,
    ESQEX_Bonamik_LinkType_Bending,
    ESQEX_Bonamik_LinkType_PinConstraint,
    ESQEX_Bonamik_LinkType_KdiConstraint,
    ESQEX_Bonamik_LinkType_ReactionTransfer,
    ESQEX_Bonamik_LinkType_InverseFreeConstraint,
};

