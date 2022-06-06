#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_ShopItemSynthesis.generated.h"

class UTresASProxyRSLStageCategory;
class UTresASProxyTresControlsTabControl;
class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UGFxObject;
class UTresASProxyRSLItemStatusA;
class UTresUIP_ShopSynthesisMaterialInfo;

UCLASS(NonTransient)
class UTresUIP_ShopItemSynthesis : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsTabControl* m_ListTab;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_SynthesysItemList;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListEmptyAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListEmptyText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLItemStatusA* m_ItemStatus;
    
    UPROPERTY(Transient)
    UTresUIP_ShopSynthesisMaterialInfo* m_MaterialInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_MaterialInfoBase;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_ShopItemSynthesis();
};

