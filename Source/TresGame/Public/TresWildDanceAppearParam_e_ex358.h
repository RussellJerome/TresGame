#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyChangeManualLockonPriority_e_ex358.h"
#include "ETresEnemyWildDanceAppearLocation_e_ex358.h"
#include "TresWildDanceAppearParam_e_ex358.generated.h"

USTRUCT(BlueprintType)
struct FTresWildDanceAppearParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyWildDanceAppearLocation_e_ex358::Type> LocationType;
    
    UPROPERTY(EditDefaultsOnly)
    float OffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCalcAppearLocationDelayAfter: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyChangeManualLockonPriority_e_ex358::Type> ChangeManualLockonPriority;
    
    TRESGAME_API FTresWildDanceAppearParam_e_ex358();
};

