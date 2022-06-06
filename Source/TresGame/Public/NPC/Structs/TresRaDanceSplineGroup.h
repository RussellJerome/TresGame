#pragma once
#include "CoreMinimal.h"
#include "ETresRaDanceAreaType.h"
#include "TresRaDanceSplineMover.h"
#include "TresRaDanceSplineGroup.generated.h"

class ATresRaFestivalDanceSplineActor;

USTRUCT(BlueprintType)
struct FTresRaDanceSplineGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_GroupName;
    
    UPROPERTY(EditAnywhere)
    ETresRaDanceAreaType m_eAreaType;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxMove;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresRaFestivalDanceSplineActor> m_pSpline;
    
    UPROPERTY(EditAnywhere)
    float m_fSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fSpeedRate;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxSpeedScale;
    
    UPROPERTY(EditAnywhere)
    float m_fInAddLength;
    
    UPROPERTY(VisibleInstanceOnly)
    float m_fTotalLength;
    
    UPROPERTY(EditAnywhere)
    int32 m_GroupIndex;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsReverse;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FTresRaDanceSplineMover> m_SplineMovers;
    
    TRESGAME_API FTresRaDanceSplineGroup();
};

