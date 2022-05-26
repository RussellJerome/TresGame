#include "TresAction3_e_ex358_ThunderStep.h"

UTresAction3_e_ex358_ThunderStep::UTresAction3_e_ex358_ThunderStep() {
    this->m_bEnableMoveTime = true;
    this->m_MoveTime = 0.15f;
    this->m_Speed = 3000.00f;
    this->m_TurnNum = 3;
    this->m_ShakeWidth = 500.00f;
    this->m_EffectColorChangeInterpTime = 0.00f;
    this->m_EnvQuery = NULL;
    this->m_EnvQueryRunMode = EEnvQueryRunMode::SingleResult;
}

