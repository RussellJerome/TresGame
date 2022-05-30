#pragma once
#include "CoreMinimal.h"
#include "TresTriggerSphere.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "TresAttractionFlowDrawingTriggerSphere.generated.h"

UCLASS()
class ATresAttractionFlowDrawingTriggerSphere : public ATresTriggerSphere, public ITresAttractionFlowDrawingInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FTresAttractionFlowDrawingEntry> m_DrawingTable;
    
    UPROPERTY(EditAnywhere)
    bool m_Enable;
    
    UPROPERTY(EditAnywhere)
    bool m_ForceDisplay;
    
public:
    ATresAttractionFlowDrawingTriggerSphere();
    
    // Fix for true pure virtual functions not being implemented
};

