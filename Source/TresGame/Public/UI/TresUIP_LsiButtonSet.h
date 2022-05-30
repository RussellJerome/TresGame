#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_LsiButtonSet.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS()
class UTresUIP_LsiButtonSet : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UGFxObject* m_LsiButton;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_LogoIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectA;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectAMode;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectB;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectBMode;
    
    UPROPERTY(Transient)
    UGFxObject* m_Btns[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_BtnTexts[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectAGameMode;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectAGameModeTouch;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectBGameMode;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectBGameModeTouch;
    
public:
    UTresUIP_LsiButtonSet();
};

