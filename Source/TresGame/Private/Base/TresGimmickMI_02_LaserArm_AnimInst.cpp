#include "TresGimmickMI_02_LaserArm_AnimInst.h"

class ATresGimmickMI_02_LaserArm;

ATresGimmickMI_02_LaserArm* UTresGimmickMI_02_LaserArm_AnimInst::GetLaserArm() {
    return NULL;
}

UTresGimmickMI_02_LaserArm_AnimInst::UTresGimmickMI_02_LaserArm_AnimInst() {
    this->m_ArmUpdownValue = 0.00f;
    this->m_ArmRotationValue = 0.00f;
}

