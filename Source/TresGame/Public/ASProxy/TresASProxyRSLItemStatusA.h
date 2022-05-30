#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLItemStatusA.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresASProxyRSLItemStatusA : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_LoadingIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_ImageNode;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_Icon;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_ParameterNode;
    
    UPROPERTY(Transient)
    UGFxObject* m_WeaponAttackNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_WeaponMagicNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_WeaponAbilityLabel[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_WeaponAbilityName[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_DefenceLabel;
    
    UPROPERTY(Transient)
    UGFxObject* m_DefenceAttackLabel;
    
    UPROPERTY(Transient)
    UGFxObject* m_DefenceMagicLabel;
    
    UPROPERTY(Transient)
    UGFxObject* m_DefenceNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_DefenceAttackNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_DefenceMagicNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_ResistNum[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_ProtectorAbilityLabel;
    
    UPROPERTY(Transient)
    UGFxObject* m_ProtectorAbilityName;
    
    UPROPERTY(Transient)
    UGFxObject* m_APNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_AccessoryAttackNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_AccessoryMagicNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_AccessoryAbilityLabel[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_AccessoryAbilityName[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_GumiStatusNum[7];
    
public:
    UTresASProxyRSLItemStatusA();
};

