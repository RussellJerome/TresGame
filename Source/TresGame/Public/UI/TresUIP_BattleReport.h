#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_BattleReport.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_BattleReport : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pButtonInfoText;
    
public:
    UTresUIP_BattleReport();
};

