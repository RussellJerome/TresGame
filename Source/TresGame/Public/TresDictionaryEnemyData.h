#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyUniqueID.h"
#include "Engine/DataTable.h"
#include "ETresUIDictionaryEnemyCategory.h"
#include "ETresUIDataVersion.h"
#include "TresUIGameFlagActor.h"
#include "ESqexCPPKHSWorldType.h"
#include "TresDictionaryEnemyData.generated.h"

USTRUCT()
struct FTresDictionaryEnemyData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresUIDictionaryEnemyCategory Category;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FString TextId;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIGameFlagActor> Actors;
    
    UPROPERTY(EditDefaultsOnly)
    FString NameTextID;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHideKillCount;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyUniqueID MainEnemyID;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresEnemyUniqueID> SubEnemyIDs;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ESqexCPPKHSWorldType> KHSWorldType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresDictionaryEnemyData();
};

