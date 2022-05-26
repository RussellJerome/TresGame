#pragma once
#include "CoreMinimal.h"
#include "TresAction_XIIILB_Base.h"
#include "TresEnemyCardWallParam_e_ex356.h"
#include "TresAction3_e_ex356_CardWall.generated.h"

UCLASS(HideDropdown)
class UTresAction3_e_ex356_CardWall : public UTresAction_XIIILB_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_FailedTimeGameDamage;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyCardWallParam_e_ex356 m_Param;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ActionEndDelayTime;
    
public:
    UTresAction3_e_ex356_CardWall();
};

