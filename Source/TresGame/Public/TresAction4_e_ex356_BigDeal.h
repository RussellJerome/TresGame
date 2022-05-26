#pragma once
#include "CoreMinimal.h"
#include "TresAction_XIIILB_Base.h"
#include "TresEnemyBigDealParamEx_e_ex356.h"
#include "TresEnemyBigDealCardSpawnParam_e_ex356.h"
#include "TresAction4_e_ex356_BigDeal.generated.h"

UCLASS(HideDropdown)
class UTresAction4_e_ex356_BigDeal : public UTresAction_XIIILB_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_StunEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyBigDealCardSpawnParam_e_ex356 m_BigDealCardSpawnParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyBigDealParamEx_e_ex356 m_BigDealParamEx;
    
public:
    UTresAction4_e_ex356_BigDeal();
};

