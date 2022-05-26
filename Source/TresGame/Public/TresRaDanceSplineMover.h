#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresRaDanceSplineMover.generated.h"

USTRUCT(BlueprintType)
struct FTresRaDanceSplineMover {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FVector m_Location;
    
    UPROPERTY(VisibleInstanceOnly)
    FQuat m_Rotation;
    
    UPROPERTY(VisibleInstanceOnly)
    bool m_bSelect;
    
    UPROPERTY(VisibleInstanceOnly)
    bool m_bMoveing;
    
    UPROPERTY(VisibleInstanceOnly)
    float m_fNowLength;
    
    UPROPERTY(VisibleInstanceOnly)
    float m_fSpeed;
    
    UPROPERTY(VisibleInstanceOnly)
    float m_fLineSpeed;
    
    UPROPERTY(VisibleInstanceOnly)
    float m_fCurrentDistance;
    
    UPROPERTY(VisibleInstanceOnly)
    bool m_bIsReverse;
    
    TRESGAME_API FTresRaDanceSplineMover();
};

