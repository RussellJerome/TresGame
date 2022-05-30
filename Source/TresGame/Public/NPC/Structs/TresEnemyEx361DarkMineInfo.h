#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx361SettingKind.h"
#include "TresEnemyEx361DarkMineInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx361DarkMineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx361SettingKind SettingKind;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DarkMineNum;
    
    UPROPERTY(EditDefaultsOnly)
    float BetweenDarkMineDist;
    
    UPROPERTY(EditDefaultsOnly)
    float DarkMineDist;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bConsiderHeight: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float DarkMineHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float DarkMineOffset;
    
    TRESGAME_API FTresEnemyEx361DarkMineInfo();
};

