#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresDlcChallengeCode.h"
#include "TresCodeMenuChallengeData.generated.h"

USTRUCT()
struct FTresCodeMenuChallengeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresDlcChallengeCode m_Code;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_NameId;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_DetailId;
    
    TRESGAME_API FTresCodeMenuChallengeData();
};

