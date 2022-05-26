#pragma once
#include "CoreMinimal.h"
#include "TresTriggerCapsule.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "TresAttractionFlowDrawingTriggerCapsule.generated.h"

UCLASS()
class ATresAttractionFlowDrawingTriggerCapsule : public ATresTriggerCapsule, public ITresAttractionFlowDrawingInterface {
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
    ATresAttractionFlowDrawingTriggerCapsule();
    
    // Fix for true pure virtual functions not being implemented
};

