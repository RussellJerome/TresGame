#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx353CatchAfterSituation.h"
#include "TresEnemyEx353ThornBeamAfterHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353ThornBeamAfterHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx353CatchAfterSituation CatchAfterSituation;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsMoveShield: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float CanMoveShieldMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float CanMoveShieldMaxDist;
    
    UPROPERTY(EditDefaultsOnly)
    float AimShieldSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MinMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float EndMoveTime;
    
    TRESGAME_API FTresEnemyEx353ThornBeamAfterHitInfo();
};

