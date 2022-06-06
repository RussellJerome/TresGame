#include "TresAnimNotify_FaceAnim.h"

UTresAnimNotify_FaceAnim::UTresAnimNotify_FaceAnim() {
    this->FaceAnimType = NORMAL_AUTO;
    this->m_bIsBattleFaceEnd = false;
    this->BlendInTime = -1.00f;
    this->isLoop = false;
    this->PlaySpeed = 1.00f;
    this->SameCheck = true;
    this->m_PlayPriority = PRIO_DEFAULT;
    this->m_bEnable0Frame = false;
}

