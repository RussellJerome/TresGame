#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_HologramAssetListItem.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_HologramAssetListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_NameRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_AssetName;
    
    UPROPERTY(Transient)
    UGFxObject* m_IconRoot;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_CharaIcon;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_KeybladeIcon;
    
public:
    UTresUIP_HologramAssetListItem();
};

