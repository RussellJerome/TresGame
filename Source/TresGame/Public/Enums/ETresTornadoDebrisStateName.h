#pragma once
#include "CoreMinimal.h"
#include "ETresTornadoDebrisStateName.generated.h"

UENUM(BlueprintType)
enum ETresTornadoDebrisStateName {
    ETresTornadoDebrisStateName_Idle,
    ETresTornadoDebrisStateName_BlowLand,
    ETresTornadoDebrisStateName_BlowAir,
    ETresTornadoDebrisStateName_DebrisLand,
    ETresTornadoDebrisStateName_DebrisAir,
    ETresTornadoDebrisStateName_MagmaTornado,
    ETresTornadoDebrisStateName_IceTornado,
    ETresTornadoDebrisStateName_BigTornado,
    ETresTornadoDebrisStateName_Vacuum,
    ETresTornadoDebrisStateName_Wind,
    ETresTornadoDebrisStateName_Hide,
    ETresTornadoDebrisStateName_IdleAlt,
};

