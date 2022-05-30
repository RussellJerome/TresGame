#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresDlcCheatAchievementID.h"
#include "TresUIGameFlagData.h"
#include "ETresWorldCode.h"
#include "TresCodeMenuCheatAchievementData.generated.h"

class UTexture;

USTRUCT()
struct FTresCodeMenuCheatAchievementData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresDlcCheatAchievementID m_Code;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_NameId;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_DetailId;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    TRESGAME_API FTresCodeMenuCheatAchievementData();
};

