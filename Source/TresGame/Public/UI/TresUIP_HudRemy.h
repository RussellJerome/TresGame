#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudRemy.generated.h"

UCLASS()
class UTresUIP_HudRemy : public UTresUIParts {
    GENERATED_BODY()
public:
    UTresUIP_HudRemy();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

