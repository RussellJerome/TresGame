#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresUIP_CampMenuCuisineSelectButton.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_CampMenuCuisineSelectButton : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_ArrowLeft;
    
    UPROPERTY(Transient)
    UGFxObject* m_ArrowRight;
    
    UPROPERTY(Transient)
    UGFxObject* m_Icon;
    
    UPROPERTY(Transient)
    UGFxObject* m_TextIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_Name;
    
    UPROPERTY(Transient)
    UGFxObject* m_TextEmpty;
    
    UPROPERTY(Transient)
    UGFxObject* m_Count;
    
    UPROPERTY(Transient)
    UGFxObject* m_TextCount;
    
public:
    UTresUIP_CampMenuCuisineSelectButton();
};

