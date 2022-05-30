#pragma once
#include "CoreMinimal.h"
#include "TresGameCheatManager.h"
#include "TresSoKcCheatManager.generated.h"

UCLASS()
class UTresSoKcCheatManager : public UTresGameCheatManager {
    GENERATED_BODY()
public:
    UTresSoKcCheatManager();
    UFUNCTION(Exec)
    void DebugDrawSoKcKeyHoleDetectCollision(bool bVisibility);
    
    UFUNCTION(Exec)
    void DebugDrawSoKcKeyHoleConnectingInternalCount(bool bVisibility);
    
    UFUNCTION(Exec)
    void DebugDrawSoKcKeyBladeBeamRaycast(bool bVisibility);
    
};

