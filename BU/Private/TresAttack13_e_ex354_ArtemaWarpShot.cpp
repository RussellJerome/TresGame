#include "TresAttack13_e_ex354_ArtemaWarpShot.h"

UTresAttack13_e_ex354_ArtemaWarpShot::UTresAttack13_e_ex354_ArtemaWarpShot() {
    this->m_bDisableLockon = false;
    this->m_fStartHeight = 0.00f;
    this->m_fFirstShotWaitTime = 0.00f;
    this->m_fCallEndEventTime = 0.00f;
    this->m_bCallEndEvent = false;
    this->m_EqsArray[0] = NULL;
    this->m_EqsArray[1] = NULL;
    this->m_EqsArray[2] = NULL;
    this->m_EqsArray[3] = NULL;
    this->m_EqsArray[4] = NULL;
    this->m_iUdekeshiEffectGroupID = 3;
    this->m_UdekeshiParamName = TEXT("udekeshi");
}

