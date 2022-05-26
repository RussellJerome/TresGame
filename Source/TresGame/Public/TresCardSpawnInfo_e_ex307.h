#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex307_DummyCardSpawn.h"
#include "TresCardAction_e_ex307.h"
#include "TresCardSpawnInfo_e_ex307.generated.h"

USTRUCT(BlueprintType)
struct FTresCardSpawnInfo_e_ex307 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float HitPointRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Num[3];
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemy_e_ex307_DummyCardSpawn::Type> DummyCardsSpawnType;
    
    UPROPERTY(EditDefaultsOnly)
    FTresCardAction_e_ex307 CardAction[3];
    
    TRESGAME_API FTresCardSpawnInfo_e_ex307();
};

