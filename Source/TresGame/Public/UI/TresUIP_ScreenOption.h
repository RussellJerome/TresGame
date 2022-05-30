#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_ScreenOption.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_ScreenOption : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pScreenAreaFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDecideText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCancelText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pUpTextAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDownTextAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pUpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDownText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMessageText;
    
public:
    UTresUIP_ScreenOption();
};

