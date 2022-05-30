#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MenuGummiRecordList.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MenuGummiRecordList : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pRecordName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNumScore;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMarker;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLevel;
    
public:
    UTresUIP_MenuGummiRecordList();
};

