#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyXIIILEPlayVoiceKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyXIIILEPlayVoiceKind : uint8 {
    VoiceAttach,
    Voice2D,
    VoiceAtLocation,
    Max,
};

