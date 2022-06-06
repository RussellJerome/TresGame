#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_SaveLoadSaveDataDisplayInfo.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_SaveLoadSaveDataDisplayInfo : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_DataLabel;
    
    UPROPERTY(Transient)
    UGFxObject* m_ClearMark;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_WorldIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_Level;
    
    UPROPERTY(Transient)
    UGFxObject* m_Munny;
    
    UPROPERTY(Transient)
    UGFxObject* m_Difficulty;
    
    UPROPERTY(Transient)
    UGFxObject* m_PlayTime;
    
    UPROPERTY(Transient)
    UGFxObject* m_AreaName;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_CharaIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_AnimationColorBg;
    
    UPROPERTY(Transient)
    UGFxObject* m_GradationBg;
    
    UPROPERTY(Transient)
    UGFxObject* m_ColorBg;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectCrown;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlcMark;
    
public:
    UTresUIP_SaveLoadSaveDataDisplayInfo();
};

