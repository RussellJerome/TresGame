#pragma once
#include "CoreMinimal.h"
#include "TresUICommandInfoBase.h"
#include "TresUICommandInfoAFRollerCoaster.generated.h"

class ATresRailSlideActor;

UCLASS()
class UTresUICommandInfoAFRollerCoaster : public UTresUICommandInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATresRailSlideActor* m_RailActor;
    
    UTresUICommandInfoAFRollerCoaster();
};

