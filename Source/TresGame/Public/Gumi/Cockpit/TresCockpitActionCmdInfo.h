#pragma once
#include "CoreMinimal.h"
#include "TresCockpitActionCmdInfo.generated.h"

class UTresUICommandInfoBase;

USTRUCT()
struct FTresCockpitActionCmdInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTresUICommandInfoBase* m_pUICommandInfo;
    
    TRESGAME_API FTresCockpitActionCmdInfo();
};

