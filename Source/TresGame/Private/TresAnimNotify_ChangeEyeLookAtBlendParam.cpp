#include "TresAnimNotify_ChangeEyeLookAtBlendParam.h"

UTresAnimNotify_ChangeEyeLookAtBlendParam::UTresAnimNotify_ChangeEyeLookAtBlendParam() {
    this->m_InterpTime = 0.50f;
    this->m_InterpFunc = ESQEX_ChangeFaceAnimBlendParamFunction::Linear;
    this->m_InterpExp = 2.00f;
    this->m_bSetInitParam = false;
}

