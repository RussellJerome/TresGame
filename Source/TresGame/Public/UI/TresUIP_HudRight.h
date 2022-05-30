#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudRight.generated.h"

class UTresUIP_HudRightMissionCounter;
class UTresUIP_HudRightLevelUp;
class UTresUIP_HudRightGetBonus;
class UTresUIP_HudRightNaviMap;
class UTresUIP_HudRightEnmHpPack;
class UTresUIP_HudRightTimer;
class UTresUIP_HudRightKairiCounter;

UCLASS()
class UTresUIP_HudRight : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIP_HudRightMissionCounter* m_MissionCounter;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_HudRightLevelUp*> m_LevelUp;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_HudRightGetBonus*> m_GetBonus;
    
    UPROPERTY(Transient)
    UTresUIP_HudRightNaviMap* m_NaviMap;
    
    UPROPERTY(Transient)
    UTresUIP_HudRightEnmHpPack* m_EnmHpPack;
    
    UPROPERTY(Transient)
    UTresUIP_HudRightTimer* m_Timer;
    
    UPROPERTY(Transient)
    UTresUIP_HudRightKairiCounter* m_KairiCounter;
    
public:
    UTresUIP_HudRight();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

