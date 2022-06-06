#include "TresEffectAttachTrackKey.h"

FTresEffectAttachTrackKey::FTresEffectAttachTrackKey() {
    this->m_Time = 0.00f;
    this->m_AttachType = ETresEffectAttachTrack_AttachType_Attach;
    this->m_AttachObjectType = SQEX_ATTACH_OBJECT_OWNER;
    this->m_GroupID = 0;
    this->m_RunEvenWhenSkippingKey = false;
}

