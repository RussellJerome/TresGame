#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_PhilharmonicContentListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_PhilharmonicContentListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_AllPlay;
    
    UPROPERTY(Transient)
    UGFxObject* m_TextColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_Text;
    
public:
    UTresUIP_PhilharmonicContentListItem();
};

