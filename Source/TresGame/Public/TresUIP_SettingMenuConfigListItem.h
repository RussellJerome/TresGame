#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SettingMenuConfigListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_SettingMenuConfigListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pSettingName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSettingColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMainKeyText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMainCursor;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSubKeyText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSubCursor;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRedCursor;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMainLockMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSubLockMark;
    
public:
    UTresUIP_SettingMenuConfigListItem();
};

