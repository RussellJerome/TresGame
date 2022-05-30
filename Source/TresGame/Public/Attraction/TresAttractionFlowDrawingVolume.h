#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "TresAttractionFlowDrawingVolume.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class ATresAttractionFlowDrawingVolume : public ATresVolume, public ITresAttractionFlowDrawingInterface {
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
    ATresAttractionFlowDrawingVolume();
    UFUNCTION(BlueprintCallable)
    void InvokeEndOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBeginOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke);
    
    
    // Fix for true pure virtual functions not being implemented
};

