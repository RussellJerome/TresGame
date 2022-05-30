#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_RailSlide.generated.h"

class USQEX_SplineComponent;
class ASQEX_SplineActor;
class UStaticMeshComponent;
class AActor;
class UTresLockonTargetComponent;

UCLASS()
class UTresCharState_RailSlide : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ASQEX_SplineActor* m_SplineActor;
    
    UPROPERTY(Export, Transient)
    USQEX_SplineComponent* m_SplineComponent;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* m_pDoorComponent;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_pTargetComponent;
    
    UPROPERTY(Transient)
    AActor* m_pTargetActor;
    
    UTresCharState_RailSlide();
};

