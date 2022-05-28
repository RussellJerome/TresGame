#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex761_BattleAreaB_Camera.h"
#include "TresBattleAreaCameraData_e_ex761.generated.h"

USTRUCT(BlueprintType)
struct FTresBattleAreaCameraData_e_ex761 {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<ETresEnemy_e_ex761_BattleAreaB_Camera::Type> CameraTypeAtBattleAreaB;
    
    TRESGAME_API FTresBattleAreaCameraData_e_ex761();
};

