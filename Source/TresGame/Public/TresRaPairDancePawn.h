#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresRaPairDancePawn.generated.h"

class ATresRaFestivalDanceManager;

UCLASS()
class ATresRaPairDancePawn : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ATresRaFestivalDanceManager* m_pDanceMng;
    
public:
    ATresRaPairDancePawn();
};

