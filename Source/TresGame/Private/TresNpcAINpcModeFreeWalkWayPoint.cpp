#include "TresNpcAINpcModeFreeWalkWayPoint.h"

FString ATresNpcAINpcModeFreeWalkWayPoint::GetCharUniqueIDName() const {
    return TEXT("");
}

ATresNpcAINpcModeFreeWalkWayPoint::ATresNpcAINpcModeFreeWalkWayPoint() {
    this->m_CharUniqueID = ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
    this->m_bUseLookAtPoint = false;
}

