#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_TheaterListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_TheaterListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_AllPlayMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_TextColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_TextField;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlcMark;
    
public:
    UTresUIP_TheaterListItem();
};

