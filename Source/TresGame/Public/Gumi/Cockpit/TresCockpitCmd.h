#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "TresCockpitCmd.generated.h"

USTRUCT(BlueprintType)
struct FTresCockpitCmd {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> m_cmdKind;
    
    TRESGAME_API FTresCockpitCmd();
};

