#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTimelineDataSection.generated.h"

UCLASS(Abstract)
class TRESGAME_API UTresTimelineDataSection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Name;
    
    UPROPERTY(EditAnywhere)
    float m_StartOffset;
    
    UPROPERTY(EditAnywhere)
    float m_Duration;
    
    UTresTimelineDataSection();
};

