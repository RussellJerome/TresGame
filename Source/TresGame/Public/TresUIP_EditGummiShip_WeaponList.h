#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_EditGummiShip_WeaponList.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_EditGummiShip_WeaponList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pWeaponIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pWepMeter;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNewMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEquip;
    
public:
    UTresUIP_EditGummiShip_WeaponList();
};

