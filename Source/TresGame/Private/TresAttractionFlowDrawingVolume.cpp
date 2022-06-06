#include "TresAttractionFlowDrawingVolume.h"

class AActor;
class UPrimitiveComponent;

void ATresAttractionFlowDrawingVolume::InvokeEndOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke) {
}

void ATresAttractionFlowDrawingVolume::InvokeBeginOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke) {
}

ATresAttractionFlowDrawingVolume::ATresAttractionFlowDrawingVolume() {
    this->m_Enable = true;
    this->m_ForceDisplay = false;
}

