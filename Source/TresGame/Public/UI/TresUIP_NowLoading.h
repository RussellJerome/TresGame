#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_NowLoading.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;
class UTexture2D;

UCLASS()
class UTresUIP_NowLoading : public UTresUIParts {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_nowLoading;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_nowStreaming;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_extraLoading;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_stageBg;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_mcExtraCharaIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_mcExtraGuage;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_mcExtraGuageSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_mcExtraStart;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_mcExtraImage;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_txtCharaName;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfxObj_txtExtraComment;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_asProxyIcon_ExtraImage;
    
    UPROPERTY(Transient)
    UTexture2D* m_extraLoadTexture;
    
public:
    UTresUIP_NowLoading();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

