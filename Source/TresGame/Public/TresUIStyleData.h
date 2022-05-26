#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresCommandKind.h"
#include "TresUIStyleData.generated.h"

class USwfMovie;

USTRUCT()
struct FTresUIStyleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> m_CommandKind;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* m_SwfAsset;
    
    TRESGAME_API FTresUIStyleData();
};

