#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuStatus.generated.h"

class UGFxObject;
class UTresUIP_CampMenuCharacterLoading;
class UTresASProxyRSLStageCategory;
class UTresASProxyRSLHelpText;

UCLASS(NonTransient)
class UTresUIP_CampMenuStatus : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGFxObject* m_LevelNum;
    
    UPROPERTY()
    UGFxObject* m_NextLevelExpNum;
    
    UPROPERTY()
    UGFxObject* m_GetExpNum;
    
    UPROPERTY()
    UGFxObject* m_ExpGauge;
    
    UPROPERTY()
    UGFxObject* m_APNum;
    
    UPROPERTY()
    UGFxObject* m_HpAnim;
    
    UPROPERTY()
    UGFxObject* m_NowHpNum;
    
    UPROPERTY()
    UGFxObject* m_MaxHpNum;
    
    UPROPERTY()
    UGFxObject* m_HpArrowIcon;
    
    UPROPERTY()
    UGFxObject* m_MpAnim;
    
    UPROPERTY()
    UGFxObject* m_NowMpNum;
    
    UPROPERTY()
    UGFxObject* m_MaxMpNum;
    
    UPROPERTY()
    UGFxObject* m_MpArrowIcon;
    
    UPROPERTY()
    UGFxObject* m_FocusAnim;
    
    UPROPERTY()
    UGFxObject* m_NowFocusNum;
    
    UPROPERTY()
    UGFxObject* m_MaxFocusNum;
    
    UPROPERTY()
    UGFxObject* m_FocusName;
    
    UPROPERTY()
    UGFxObject* m_AttackAnim;
    
    UPROPERTY()
    UGFxObject* m_AttackNum;
    
    UPROPERTY()
    UGFxObject* m_AttackArrowIcon;
    
    UPROPERTY()
    UGFxObject* m_MagicAnim;
    
    UPROPERTY()
    UGFxObject* m_MagicNum;
    
    UPROPERTY()
    UGFxObject* m_MagicArrowIcon;
    
    UPROPERTY()
    UGFxObject* m_DefenceAnim;
    
    UPROPERTY()
    UGFxObject* m_DefenceNum;
    
    UPROPERTY()
    UGFxObject* m_DefenceArrowIcon;
    
    UPROPERTY()
    UGFxObject* m_FireNum;
    
    UPROPERTY()
    UGFxObject* m_BlizzardNum;
    
    UPROPERTY()
    UGFxObject* m_ThunderNum;
    
    UPROPERTY()
    UGFxObject* m_WaterNum;
    
    UPROPERTY()
    UGFxObject* m_AeroNum;
    
    UPROPERTY()
    UGFxObject* m_DarkNum;
    
    UPROPERTY()
    UGFxObject* m_CharaName;
    
    UPROPERTY()
    UTresUIP_CampMenuCharacterLoading* m_CharaLoading;
    
    UPROPERTY()
    UTresASProxyRSLStageCategory* m_StageCategory;
    
    UPROPERTY()
    UTresASProxyRSLHelpText* m_HelpText;
    
public:
    UTresUIP_CampMenuStatus();
};

