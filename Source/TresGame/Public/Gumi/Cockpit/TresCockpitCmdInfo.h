#pragma once
#include "CoreMinimal.h"
#include "TresCockpitCmd.h"
#include "TresCockpitCmdInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresCockpitCmdInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresCockpitCmd> m_cockpitCmdAry;
    
    TRESGAME_API FTresCockpitCmdInfo();
};

