#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTimelinePlayer.generated.h"

class UTresTimelineData;
class UTresTimelineDataSection;

UCLASS(Transient)
class UTresTimelinePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTresTimelineData* m_Data;
    
    UPROPERTY()
    TArray<UTresTimelineDataSection*> m_ActiveSections;
    
    UPROPERTY()
    TArray<UObject*> m_GCGuard;
    
    UTresTimelinePlayer();
};

