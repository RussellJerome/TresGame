#pragma once
#include "CoreMinimal.h"
#include "TresCharState_PlaneBoss.h"
#include "TresPlayerState_PlaneBoss.generated.h"

class ATresEnemyPawn_e_ex021;
class ATresCameraEx021;

UCLASS()
class UTresPlayerState_PlaneBoss : public UTresCharState_PlaneBoss {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresEnemyPawn_e_ex021* m_pObj;
    
protected:
    UPROPERTY()
    ATresCameraEx021* m_Camera;
    
public:
    UTresPlayerState_PlaneBoss();
};

