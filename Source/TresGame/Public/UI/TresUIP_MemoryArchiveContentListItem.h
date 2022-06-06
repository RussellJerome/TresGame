#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_MemoryArchiveContentListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MemoryArchiveContentListItem : public UTresASProxyTresControlsListItem {
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
    UTresUIP_MemoryArchiveContentListItem();
};

