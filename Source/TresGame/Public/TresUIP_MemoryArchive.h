#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MemoryArchive.generated.h"

class UTresASProxyRSLBtnInfo;
class UTresASProxyTresControlsList;
class UTresASProxyRSLHelpText;
class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS()
class UTresUIP_MemoryArchive : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyRSLBtnInfo* m_BtnInfo;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_SubtitleOnOff;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_ContentList;
    
    UPROPERTY(Transient)
    UGFxObject* m_Thumbnail;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_ThumbnailIcon;
    
public:
    UTresUIP_MemoryArchive();
};

