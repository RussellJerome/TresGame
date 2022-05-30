#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLStageCategory.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresASProxyRSLStageCategory : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_StageObjL;
    
    UPROPERTY(Transient)
    UGFxObject* m_Category;
    
    UPROPERTY(Transient)
    UGFxObject* m_CategoryIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_CategoryNameText;
    
    UPROPERTY(Transient)
    UGFxObject* m_BgCategoryIcon;
    
public:
    UTresASProxyRSLStageCategory();
};

