#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_ShopKeyPowerUp.generated.h"

class UGFxObject;
class UTresUIP_ShopSynthesisMaterialInfo;
class UTresASProxyTresControlsIcon;
class UTresASProxyRSLStageCategory;
class UTresUIP_ShopKeyPickerItem;
class UTresASProxyRSLHelpText;

UCLASS(NonTransient)
class UTresUIP_ShopKeyPowerUp : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_LevelEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_LastEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_CommonEffect;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_EffectKeyIcon1;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_EffectKeyIcon2;
    
    UPROPERTY(Transient)
    UGFxObject* m_KeyLockAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_WhiteOutAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_ToneDown;
    
    UPROPERTY(Transient)
    UGFxObject* m_KeybladeAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_KeybladeName;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_KeybladeIcon;
    
    UPROPERTY(Transient)
    UTresUIP_ShopKeyPickerItem* m_Picker[9];
    
    UPROPERTY(Transient)
    UGFxObject* m_LeftArrow;
    
    UPROPERTY(Transient)
    UGFxObject* m_RightArrow;
    
    UPROPERTY(Transient)
    UGFxObject* m_LevelIconEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_LockIconAnim[10];
    
    UPROPERTY(Transient)
    UGFxObject* m_StatusLabel[2];
    
    UPROPERTY(Transient)
    UGFxObject* m_NowStatusNum[2];
    
    UPROPERTY(Transient)
    UGFxObject* m_PowerUpStatusNum[2];
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityLabel;
    
    UPROPERTY(Transient)
    UGFxObject* m_AbilityName;
    
    UPROPERTY(Transient)
    UTresUIP_ShopSynthesisMaterialInfo* m_MaterialInfo;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_ShopKeyPowerUp();
};

