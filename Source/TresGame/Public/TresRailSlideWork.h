#pragma once
#include "CoreMinimal.h"
#include "TresRailSlideWork.generated.h"

class AActor;
class USQEX_SplineComponent;
class ASQEX_SplineActor;

USTRUCT(BlueprintType)
struct FTresRailSlideWork {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_LeadActor;
    
    UPROPERTY()
    ASQEX_SplineActor* m_RailSlideActor;
    
    UPROPERTY(Export)
    USQEX_SplineComponent* m_RailSlideComponent;
    
    UPROPERTY(Transient)
    ASQEX_SplineActor* m_LastRailSlideActor;
    
    UPROPERTY(Export, Transient)
    USQEX_SplineComponent* m_LastRailSlideComponent;
    
    UPROPERTY()
    ASQEX_SplineActor* m_PauseCheckActor;
    
    UPROPERTY(Export)
    USQEX_SplineComponent* m_PauseCheckComponent;
    
    TRESGAME_API FTresRailSlideWork();
};

