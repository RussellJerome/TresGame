#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresMBModelElement.h"
#include "TresMBCameraElement.h"
#include "TresMBCurveElement.h"
#include "TresMBClipElement.h"
#include "TresMBCameraData.generated.h"

UCLASS()
class TRESGAME_API UTresMBCameraData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresMBModelElement> m_Models;
    
    UPROPERTY()
    TArray<FTresMBCameraElement> m_Cameras;
    
    UPROPERTY()
    TArray<FTresMBCurveElement> m_Curves;
    
    UPROPERTY()
    TArray<FTresMBClipElement> m_Clips;
    
    UPROPERTY()
    float m_Start;
    
    UPROPERTY()
    float m_Stop;
    
    UTresMBCameraData();
};

