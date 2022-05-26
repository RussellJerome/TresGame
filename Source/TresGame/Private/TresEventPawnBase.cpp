#include "TresEventPawnBase.h"

class ATresCharPawnBase;

void ATresEventPawnBase::BP_RestorePropertyToDefault() {
}

void ATresEventPawnBase::BP_CopyPropertyFrom(ATresCharPawnBase* InSrcPawn, bool bAnimBlueprintCopy, bool bEquipmentCopy) {
}

void ATresEventPawnBase::BP_ApplyChrEquipment(ETresChrUniqueID InChrUniqueID) {
}

ATresEventPawnBase::ATresEventPawnBase() {
    this->m_bAutoChangeSkeletonUpdate = false;
}

