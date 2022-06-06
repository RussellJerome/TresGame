#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresCommandKind.h"
#include "TresCockpitStyleInfo.h"
#include "ETresUIHudCommandExKind.h"
#include "ETresUIMainCommandTitleKind.h"
#include "TresUIMainCommandData.generated.h"

class USwfMovie;

USTRUCT()
struct FTresUIMainCommandData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> m_CommandKind;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIHudCommandExKind m_CommandExKind;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIMainCommandTitleKind m_TitleKind;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* m_SwfAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FTresCockpitStyleInfo m_styleInfo;
    
    TRESGAME_API FTresUIMainCommandData();
};

