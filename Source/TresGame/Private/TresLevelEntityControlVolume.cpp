#include "TresLevelEntityControlVolume.h"

class AActor;
class UPrimitiveComponent;

void ATresLevelEntityControlVolume::InvokeEndOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke) {
}

void ATresLevelEntityControlVolume::InvokeBeginOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke) {
}

ATresLevelEntityControlVolume::ATresLevelEntityControlVolume() {
    this->m_EnterSequence = NULL;
    this->m_ExitSequence = NULL;
    this->m_Manager = NULL;
    this->m_ControlObjectType = ESQEX_ObjectType::SQEX_OBJ_TYPE_NONE;
    this->m_WarpRequest = false;
    this->m_DistanceBattleOwner = 340282346638528859811704183484516925440.00f;
    this->m_ImmediateInvoke = false;
}

