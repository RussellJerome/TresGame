#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresPointDamageEvent.generated.h"

USTRUCT()
struct FTresPointDamageEvent : public FPointDamageEvent {
    GENERATED_BODY()
public:
    TRESGAME_API FTresPointDamageEvent();
};

