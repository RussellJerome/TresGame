#pragma once
#include "CoreMinimal.h"
#include "ETresTeam.h"
#include "UObject/NoExportTypes.h"
#include "TresTeamDebugColor.generated.h"

USTRUCT(BlueprintType)
struct FTresTeamDebugColor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresTeam::Type> TeamID;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor Color;
    
    TRESGAME_API FTresTeamDebugColor();
};

