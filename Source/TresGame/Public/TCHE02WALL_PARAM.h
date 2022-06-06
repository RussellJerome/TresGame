#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TCHE02WALL_PARAM.generated.h"

class UCameraShake;

USTRUCT()
struct FTCHE02WALL_PARAM {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSubclassOf<UCameraShake> CameraShake;
    
    TRESGAME_API FTCHE02WALL_PARAM();
};

