#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudParts.h"
#include "TresUIP_HudRightNaviMap.generated.h"

class UTresASProxyTresControlsNaviMapCanvas;

UCLASS(NonTransient)
class UTresUIP_HudRightNaviMap : public UTresUIP_HudParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsNaviMapCanvas* m_NaviMapCanvas;
    
public:
    UTresUIP_HudRightNaviMap();
};

