#pragma once
#include "CoreMinimal.h"
#include "EWarpType_e_ex355.h"
#include "TresActionDefinitionBase.h"
#include "TresAction7_e_ex355_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction7_e_ex355_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EWarpType_e_ex355> m_WarpType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpTime_Appear;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bNoWaitAppearWhenBerserkGageZero;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableLockonOnDisappear;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bMove;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MoveBBKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForRevenge;
    
    UTresAction7_e_ex355_Warp();
};

