#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuInfo.generated.h"

class UTresDebugMenuScene;

USTRUCT(BlueprintType)
struct FTresDebugMenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTresDebugMenuScene* m_Instance;
    
    TRESGAME_API FTresDebugMenuInfo();
};

