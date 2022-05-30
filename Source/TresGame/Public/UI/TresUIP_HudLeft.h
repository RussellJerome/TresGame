#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudLeft.generated.h"

class UTresUIP_HudLeftMissionGage;
class UTresUIP_HudLeftInformation;
class UTresUIP_HudLeftTimer;
class UTresUIP_HudLeftScoreHit;
class UTresUIP_HudLeftGetItem;
class UTresUIP_HudLeftScore;
class UTresUIP_HudLeftNextLv;
class UTresUIP_HudLeftGetMunny;

UCLASS()
class UTresUIP_HudLeft : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTresUIP_HudLeftInformation* m_Information;
    
    UPROPERTY()
    UTresUIP_HudLeftMissionGage* m_MissionGage;
    
    UPROPERTY()
    UTresUIP_HudLeftTimer* m_Timer;
    
    UPROPERTY()
    UTresUIP_HudLeftGetItem* m_GetItem;
    
    UPROPERTY()
    UTresUIP_HudLeftScore* m_Score;
    
    UPROPERTY()
    UTresUIP_HudLeftScoreHit* m_ScoreHit;
    
    UPROPERTY()
    UTresUIP_HudLeftNextLv* m_NextLv;
    
    UPROPERTY()
    UTresUIP_HudLeftGetMunny* m_GetMunny;
    
public:
    UTresUIP_HudLeft();
    UFUNCTION()
    int32 OnCallback(int32 nId, int32 nParam);
    
};

