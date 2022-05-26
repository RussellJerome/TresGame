#pragma once
#include "CoreMinimal.h"
#include "TresRailSlideMoveInfo.generated.h"

class USQEX_SplineComponent;
class ASQEX_SplineActor;

USTRUCT()
struct FTresRailSlideMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ASQEX_SplineActor* m_StartActor;
    
    UPROPERTY(Transient)
    ASQEX_SplineActor* m_EndActor;
    
    UPROPERTY(Export, Transient)
    USQEX_SplineComponent* m_Component;
    
    TRESGAME_API FTresRailSlideMoveInfo();
};

