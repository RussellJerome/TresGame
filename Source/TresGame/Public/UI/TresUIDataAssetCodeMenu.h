#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetCodeMenu.generated.h"

class USwfMovie;
class UObject;
class UDataTable;
class UTresUIGumiCheatDataAsset;

UCLASS()
class UTresUIDataAssetCodeMenu : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetCodeMenu;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetCodeMenuInfo;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> CodeMenuSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CheatDatas;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ChallengeDatas;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CheatAchievementDatas;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ChallengeScoreDatas;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ChallengeRankDatas;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIGumiCheatDataAsset* GumiCheatData;
    
    UTresUIDataAssetCodeMenu();
};

