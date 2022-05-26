#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresDebugMenuResourceType.h"
#include "TresDebugMenuCustomPart.generated.h"

class UTresDebugMenuObject;

USTRUCT(BlueprintType)
struct FTresDebugMenuCustomPart {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ETresDebugMenuResourceType> m_ResourceType;
    
    UPROPERTY()
    int32 m_ResourceIndex;
    
    UPROPERTY()
    TSubclassOf<UTresDebugMenuObject> CustomClass;
    
    TRESGAME_API FTresDebugMenuCustomPart();
};

