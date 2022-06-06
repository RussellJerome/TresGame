#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_HudGigasGameFrontGetScore.generated.h"

class UTresASProxyTresControlsBitmapNumber;
class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGigasGameFrontGetScore : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_GetScoreAnimation;
    
    UPROPERTY(Transient)
    UGFxObject* m_GetScoreDigitAnimation;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_GetScoreNumber;
    
public:
    UTresUIP_HudGigasGameFrontGetScore();
};

