#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_ShopSynthesisTop.generated.h"

class UGFxObject;
class UTresASProxyRSLTopMenuCmd;
class UTresASProxyRSLStageCategory;

UCLASS(NonTransient)
class UTresUIP_ShopSynthesisTop : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyRSLTopMenuCmd* m_TopButtons[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_CompleteMark[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_CreateLogCount[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_PhotoMissionLogText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_ShopSynthesisTop();
};

