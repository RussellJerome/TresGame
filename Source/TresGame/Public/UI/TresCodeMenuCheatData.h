#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresUICheatCategory.h"
#include "ETresDlcCheatCode.h"
#include "TresCodeMenuCheatData.generated.h"

USTRUCT()
struct FTresCodeMenuCheatData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresDlcCheatCode m_Code;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_NameId;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_DetailId;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUICheatCategory m_Category;
    
    TRESGAME_API FTresCodeMenuCheatData();
};

