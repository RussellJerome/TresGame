#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_CutsceneText.generated.h"

UCLASS()
class UTresUIP_CutsceneText : public UTresUIParts {
    GENERATED_BODY()
public:
    UTresUIP_CutsceneText();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

