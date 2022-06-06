#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyBigDealAction_e_ex356.h"
#include "TresEnemyBigDealActionParam_e_ex356.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresEnemyBigDealActionParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyBigDealAction_e_ex356::Type> ActionType;
    
    UPROPERTY(EditDefaultsOnly)
    float ActionTime;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* VoiceData;
    
    TRESGAME_API FTresEnemyBigDealActionParam_e_ex356();
};

