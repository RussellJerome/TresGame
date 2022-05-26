#include "TresAction1_e_he903_Vacuum.h"

UTresAction1_e_he903_Vacuum::UTresAction1_e_he903_Vacuum() {
    this->m_fLoopTime = 0.00f;
    this->m_fPullForce = 0.00f;
    this->m_SuctionVelCurve = NULL;
    this->m_EatVelCurve = NULL;
    this->m_SpitWaitTime = 0.00f;
    this->m_fMaxFloatingTime = 0.00f;
    this->m_fLaunchHeight = 0.00f;
    this->m_fLaunchTime = 0.00f;
    this->m_DummyActorClass = NULL;
    this->m_pDummyActor = NULL;
    this->pHitPawnsManager = NULL;
}

