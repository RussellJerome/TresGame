#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRIceRailSlide.h"
#include "TresPlayerState_FRIceRailSlide.generated.h"

class USQEX_SplineComponent;
class ASQEX_SplineActor;

UCLASS()
class UTresPlayerState_FRIceRailSlide : public UTresCharState_FRIceRailSlide {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ASQEX_SplineActor* m_SplineActor;
    
    UPROPERTY(Export)
    USQEX_SplineComponent* m_SplineComponent;
    
public:
    UTresPlayerState_FRIceRailSlide();
};

