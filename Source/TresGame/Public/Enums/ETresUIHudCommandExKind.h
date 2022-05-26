#pragma once
#include "CoreMinimal.h"
#include "ETresUIHudCommandExKind.generated.h"

UENUM(BlueprintType)
enum class ETresUIHudCommandExKind : uint8 {
    None,
    Railscope1,
    Railscope2,
    RailChange,
    HeWorkshop,
    HeWorkshop_Finish,
    TsToyGame,
    RaDanceCommand,
    RaDanceRapunzel,
    RaDanceRapunzel_Finish,
    BxCommand,
    BxDarkBaymax,
    BxDarkBaymax_Rail,
    BxDarkBaymax_Finish,
    CaSpecialShipCommand,
    CaBlackPearlCommand,
    ShootFlow_Rainbow,
    ShootFlow_Burst,
    ShootFlow_Shining,
    ShootFlow_DarkVolley,
    ShootFlow_BurstR,
    MAX,
};

