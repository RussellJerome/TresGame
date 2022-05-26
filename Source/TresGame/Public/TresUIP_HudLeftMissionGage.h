#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudParts.h"
#include "TresUIPreloadInfo.h"
#include "TresUIP_HudLeftMissionGage.generated.h"

UCLASS(NonTransient)
class UTresUIP_HudLeftMissionGage : public UTresUIP_HudParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FTresUIPreloadInfo m_PreloadInfo;
    
public:
    UTresUIP_HudLeftMissionGage();
};

