#pragma once
#include "CoreMinimal.h"
#include "EStoleTrapN.generated.h"

UENUM(BlueprintType)
namespace EStoleTrapN {
    enum Type {
        CPT_Destination,
        CPT_BattleAreaCenter,
        CPT_OwnerLocation,
        CPT_MAX UMETA(Hidden),
    };
}

