#pragma once
#include "CoreMinimal.h"
#include "AISystem.h"
#include "TresAISystem.generated.h"

class UTresInfluenceMapManager;
class UTresStaticEQSItemManager;

UCLASS()
class UTresAISystem : public UAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UTresInfluenceMapManager* m_InfluenceMapManager;
    
    UPROPERTY(Transient)
    UTresStaticEQSItemManager* m_StaticEQSItemManager;
    
public:
    UTresAISystem(const FObjectInitializer& ObjectInitializer);
};

