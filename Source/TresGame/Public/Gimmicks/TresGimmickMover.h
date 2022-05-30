#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickMover.generated.h"

class UTresRootComponent;
class USQEX_SplineComponent;
class ASQEX_SplineActor;

UCLASS(Abstract)
class ATresGimmickMover : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_RotationVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsRailSlideMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsRailForwardDir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RailSlideSpeed;
    
    UPROPERTY(Transient)
    uint8 bIsRailSlideMoveStarted: 1;
    
    UPROPERTY(Transient)
    uint8 bIsRailSlideMove: 1;
    
    UPROPERTY(Transient)
    uint8 bIsRailSlideReverse: 1;
    
    UPROPERTY(Transient)
    ASQEX_SplineActor* MyRailSlideActor;
    
    UPROPERTY(Export, Transient)
    USQEX_SplineComponent* MyRailSlideComponent;
    
    UPROPERTY(Transient)
    FVector MyRailSlideDir;
    
    UPROPERTY(Transient)
    float MyRailSlideSpeed;
    
    UPROPERTY(Transient)
    float MyRailSlideCurrentDistance;
    
    UPROPERTY(Transient)
    float MyRailSlideMovePrevCurveLength;
    
public:
    ATresGimmickMover();
};

