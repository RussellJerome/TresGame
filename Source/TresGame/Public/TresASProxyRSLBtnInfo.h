#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLBtnInfo.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresASProxyRSLBtnInfo : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_BtnInfoText;
    
public:
    UTresASProxyRSLBtnInfo();
};

