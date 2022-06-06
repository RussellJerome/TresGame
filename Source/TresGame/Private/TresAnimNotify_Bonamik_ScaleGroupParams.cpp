#include "TresAnimNotify_Bonamik_ScaleGroupParams.h"

UTresAnimNotify_Bonamik_ScaleGroupParams::UTresAnimNotify_Bonamik_ScaleGroupParams() {
    this->m_ChangeInnerCone = true;
    this->m_InnerConeScale = 1.00f;
    this->m_ChangeOuterCone = true;
    this->m_OuterConeScale = 1.00f;
    this->m_ChangeLocalForce = true;
    this->m_LocalForceScale = 1.00f;
    this->m_ChangeWindScale = true;
    this->m_GroupWindScale = 1.00f;
    this->m_ChangeMassScale = true;
    this->m_GroupMassScale = 1.00f;
    this->m_ApplyToAttachments = false;
}

