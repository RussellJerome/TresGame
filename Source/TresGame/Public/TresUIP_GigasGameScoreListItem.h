#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_GigasGameScoreListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_GigasGameScoreListItem : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_ScoreTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_Score;
    
public:
    UTresUIP_GigasGameScoreListItem();
};

