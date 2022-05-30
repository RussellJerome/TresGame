#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_ShopSynthesisMaterialInfo.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_ShopSynthesisMaterialInfo : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_MaterialEnoughAnim[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_MaterialTextIcon[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_MaterialName[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_MaterialNeedCount[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_MaterialHaveCount[6];
    
public:
    UTresUIP_ShopSynthesisMaterialInfo();
};

