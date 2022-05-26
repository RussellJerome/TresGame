#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_bx903_LockonIdle.generated.h"

UCLASS(HideDropdown)
class UTresAction3_e_bx903_LockonIdle : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_EndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DispCore;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_NotDestroyCore;
    
public:
    UTresAction3_e_bx903_LockonIdle();
};

