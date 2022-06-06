#pragma once
#include "CoreMinimal.h"
#include "EManaMovieType.generated.h"

UENUM(BlueprintType)
enum class EManaMovieType : uint8 {
    SofdecPrime,
    H264,
    Num,
    Unknown = 0xFF,
};

