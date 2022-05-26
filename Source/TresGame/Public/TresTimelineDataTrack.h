#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTimelineDataTrack.generated.h"

class UTresTimelineDataSection;

UCLASS(Abstract)
class TRESGAME_API UTresTimelineDataTrack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Name;
    
    UPROPERTY(EditAnywhere)
    bool m_SubTrack;
    
    UPROPERTY(EditAnywhere, Export, NoClear)
    TArray<UTresTimelineDataSection*> m_Sections;
    
    UTresTimelineDataTrack();
};

