#include "TresTrackAttachKey.h"

FTresTrackAttachKey::FTresTrackAttachKey() {
    this->m_Time = 0.00f;
    this->m_bAttach = false;
    this->m_ParentActor = NULL;
    this->m_AttachLocationType = EAttachLocation::KeepRelativeOffset;
    this->m_bWeldSimulatedBodies = false;
    this->m_bAbsoluteLocation = false;
    this->m_bAbsoluteRotation = false;
    this->m_bAbsoluteScale = false;
    this->m_bUseGroupName = false;
}

