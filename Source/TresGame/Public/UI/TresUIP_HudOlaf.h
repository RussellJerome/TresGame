#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudOlaf.generated.h"

class UTresUIP_HudParts;

UCLASS()
class UTresUIP_HudOlaf : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_HudParts;
    
public:
    UTresUIP_HudOlaf();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

