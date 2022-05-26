#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresGumiShipGuideObjects.h"
#include "TresUIP_HudGummiShipGuide.generated.h"

UCLASS(NonTransient)
class UTresUIP_HudGummiShipGuide : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FTresGumiShipGuideObjects m_WorldGuide[5];
    
    UPROPERTY(Transient)
    FTresGumiShipGuideObjects m_MarkerGuide;
    
    UPROPERTY(Transient)
    FTresGumiShipGuideObjects m_EnemyGuide[10];
    
public:
    UTresUIP_HudGummiShipGuide();
};

