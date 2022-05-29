#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresEnemyXIIIRetryInheritParam.generated.h"

UCLASS()
class UTresEnemyXIIIRetryInheritParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 m_HitPoint;
    
    UTresEnemyXIIIRetryInheritParam();
};

