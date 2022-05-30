#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyHideAndSeekLocation_e_ex356.h"
#include "TresEnemyHideAndSeekTurnParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyHideAndSeekTurnParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyHideAndSeekLocation_e_ex356::Type> TurnLocationType;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnDecelerationStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float MinTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AllPlaneCardDestroySubTurnSpeed;
    
    TRESGAME_API FTresEnemyHideAndSeekTurnParam_e_ex356();
};

