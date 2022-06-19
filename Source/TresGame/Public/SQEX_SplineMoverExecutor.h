#pragma once
#include "CoreMinimal.h"
#include "SQEX_SplineMoverExecutor.generated.h"

class ASQEX_SplineActor;
class USplineComponent;

USTRUCT(BlueprintType)
struct FSQEX_SplineMoverExecutor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_IsReverse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_IsLoop: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsStraightSpline;
    
    UPROPERTY(Transient)
    ASQEX_SplineActor* m_pCurrentSplineActor;
    
    UPROPERTY(Transient)
    ASQEX_SplineActor* m_pSplineActorFirst;
    
    UPROPERTY(Transient)
    ASQEX_SplineActor* m_pSplineActorLast;
    
    UPROPERTY(Export, Transient)
    USplineComponent* m_pUnrealSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Speed;
    
public:
    TRESGAME_API FSQEX_SplineMoverExecutor();
};

