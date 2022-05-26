#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyXIIIEPlayVoiceKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyXIIIEPlayVoiceKind : uint8 {
    VoiceAttach,
    Voice2D,
    VoiceAtLocation,
    Max,
};

