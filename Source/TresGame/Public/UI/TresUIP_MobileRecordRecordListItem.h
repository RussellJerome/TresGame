#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MobileRecordRecordListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileRecordRecordListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_CategoryText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Text;
    
    UPROPERTY(Transient)
    UGFxObject* m_ScoreText;
    
    UPROPERTY(Transient)
    UGFxObject* m_DlcMark;
    
public:
    UTresUIP_MobileRecordRecordListItem();
};

