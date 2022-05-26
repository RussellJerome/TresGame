#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EEX354_FieldID.h"
#include "EEX354_WarpPosType.h"
#include "EEX354_WarpType.h"
#include "TresAction3_e_ex354_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction3_e_ex354_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bForRevenge;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX354_FieldID> m_AvailableFieldID;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX354_WarpType> m_WarpType;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX354_WarpPosType> m_WarpPosType;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableLockon;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ActionEQSQuery;
    
public:
    UTresAction3_e_ex354_Warp();
};

