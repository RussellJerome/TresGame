#pragma once
#include "CoreMinimal.h"
#include "EEngineIniFileType.generated.h"

UENUM(BlueprintType)
namespace EEngineIniFileType {
    enum Type {
        EngBaseEngineIni,
        EngWindowsEngineIni,
        EngPS4EngineIni,
        EngXboxOneEngineIni,
        ProjDefaultEngineIni,
        ProjWindowsEngineIni,
        ProjPS4EngineIni,
        ProjXboxOneEngineIni,
    };
}

