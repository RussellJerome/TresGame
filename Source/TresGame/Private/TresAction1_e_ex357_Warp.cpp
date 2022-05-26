#include "TresAction1_e_ex357_Warp.h"

UTresAction1_e_ex357_Warp::UTresAction1_e_ex357_Warp() {
    this->m_bEnableActionAbortWait = false;
    this->m_bIsWarpInActionEnd = false;
    this->m_bEnableWarpOutActionAbort = false;
    this->m_EnvQuery = NULL;
    this->m_EnvQueryRunMode = EEnvQueryRunMode::SingleResult;
}

