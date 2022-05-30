#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_HologramSaveLoadListItem.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_HologramSaveLoadListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_SlotNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_DataRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_EmptyText;
    
    UPROPERTY(Transient)
    UGFxObject* m_DateText;
    
    UPROPERTY(Transient)
    UGFxObject* m_TimeText;
    
    UPROPERTY(Transient)
    UGFxObject* m_AreaName;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_WorldIcon;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_AreaImg;
    
public:
    UTresUIP_HologramSaveLoadListItem();
};

