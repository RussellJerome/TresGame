#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresAchievementParam.generated.h"

USTRUCT()
struct FTresAchievementParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Param;
    
    TRESGAME_API FTresAchievementParam();
};

