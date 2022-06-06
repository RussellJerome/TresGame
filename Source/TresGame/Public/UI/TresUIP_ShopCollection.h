#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_ShopCollection.generated.h"

class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UGFxObject;
class UTresASProxyRSLStageCategory;

UCLASS(NonTransient)
class UTresUIP_ShopCollection : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_CollectionList;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListEmptyAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_ListEmptyText;
    
    UPROPERTY(Transient)
    UGFxObject* m_BonusText;
    
    UPROPERTY(Transient)
    UGFxObject* m_BonusItemIcon[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_BonusItemName[4];
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_ShopCollection();
};

