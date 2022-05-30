#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAction_e_dw405_Base.h"
#include "TresE_dw405ActionParam.h"
#include "TresAction2_e_dw405_PlayAction.generated.h"

class UTresStateBase;

UCLASS(HideDropdown)
class UTresAction2_e_dw405_PlayAction : public UTresAction_e_dw405_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405ActionParam> m_ActionParams;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableAvaatarLockonCheck: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_ActionDefClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RespawnRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShootLockIncreaseTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDebugEnableAppear: 1;
    
public:
    UTresAction2_e_dw405_PlayAction();
};

