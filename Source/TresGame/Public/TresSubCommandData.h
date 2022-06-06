#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresCommandKind.h"
#include "TresSubCommandData.generated.h"

USTRUCT(BlueprintType)
struct FTresSubCommandData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> SubCommand1;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> SubCommand2;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> SubCommand3;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> SubCommand4;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> SubCommand5;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> SubCommand6;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> SubCommand7;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> SubCommand8;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> SubCommand9;
    
    TRESGAME_API FTresSubCommandData();
};

