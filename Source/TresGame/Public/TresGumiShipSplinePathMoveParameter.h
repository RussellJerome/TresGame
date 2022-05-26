#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSplinePathMoveParameter.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipSplinePathMoveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fPathMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxPathMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fPathMoveAcceleration;
    
    UPROPERTY(EditAnywhere)
    float m_fPathMoveDeceleration;
    
    UPROPERTY(EditAnywhere)
    float m_fStartDistanceRate;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bReversePath: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bLoopPath: 1;
    
    TRESGAME_API FTresGumiShipSplinePathMoveParameter();
};

