#pragma once
#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "TresAttractionFlowDrawingTriggerBox.generated.h"

UCLASS()
class ATresAttractionFlowDrawingTriggerBox : public ATresTriggerBox, public ITresAttractionFlowDrawingInterface {
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
    ATresAttractionFlowDrawingTriggerBox();
    
    // Fix for true pure virtual functions not being implemented
};

