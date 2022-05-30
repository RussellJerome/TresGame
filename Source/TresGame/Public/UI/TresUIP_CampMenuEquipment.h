#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuEquipment.generated.h"

class UGFxObject;
class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UTresASProxyRSLItemStatusA;
class UTresASProxyRSLStageCategory;
class UTresASProxyRSLItemStatusB;

UCLASS(NonTransient)
class UTresUIP_CampMenuEquipment : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_EquippedRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_EquippedListVisibleAnim;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_EquippedList;
    
    UPROPERTY(Transient)
    UTresASProxyRSLItemStatusA* m_EquippedStatusA;
    
    UPROPERTY(Transient)
    UGFxObject* m_EquippedCharaName;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_EquippedHelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_EquippedStageCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_BackyardRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_BackyardListVisibleAnim;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_BackyardEquipmentList;
    
    UPROPERTY(Transient)
    UTresASProxyRSLItemStatusA* m_BackyardItemStatusA;
    
    UPROPERTY(Transient)
    UTresASProxyRSLItemStatusB* m_BackyardItemStatusB;
    
    UPROPERTY(Transient)
    UGFxObject* m_BackyardCharaName;
    
    UPROPERTY(Transient)
    UGFxObject* m_BackyardEmptyText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_BackyardHelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_BackyardStageCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityEquipItemNameVisibleAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityEquipItemName;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityEquipItemTextIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityListVisibleAnim;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_AbilityList;
    
public:
    UTresUIP_CampMenuEquipment();
};

