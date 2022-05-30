#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Theater.generated.h"

class UTresASProxyRSLBtnInfo;
class UTresASProxyTresControlsList;
class UTresASProxyRSLHelpText;
class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS()
class UTresUIP_Theater : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTresASProxyRSLBtnInfo* m_ButtonInfo;
    
    UPROPERTY()
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY()
    UGFxObject* m_SubtitleSwitchAnimation;
    
    UPROPERTY()
    UGFxObject* m_ChapterTitleAnimation;
    
    UPROPERTY()
    UGFxObject* m_ChapterTitleText;
    
    UPROPERTY()
    UGFxObject* m_ChapterSceneListAnimation;
    
    UPROPERTY()
    UTresASProxyTresControlsList* m_ChapterSceneList;
    
    UPROPERTY()
    UGFxObject* m_ThumbnailAnimation;
    
    UPROPERTY()
    UTresASProxyTresControlsIcon* m_ThumbnailIcon;
    
public:
    UTresUIP_Theater();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

