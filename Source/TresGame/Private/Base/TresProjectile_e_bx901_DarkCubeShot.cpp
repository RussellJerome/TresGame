#include "TresProjectile_e_bx901_DarkCubeShot.h"

ATresProjectile_e_bx901_DarkCubeShot::ATresProjectile_e_bx901_DarkCubeShot() {
    this->m_fPlayerProjGrabMinDist = 0.00f;
    this->m_fPlayerProjGrabMaxAngle = 90.00f;
    this->m_fPlayerProjGrabTurnSpeed = 5000.00f;
    this->m_fDisableLockonDistance = 0.00f;
    this->m_fDisableLockonAngleToDarkBaymax = 180.00f;
    this->m_bDisableHomingOnLockonDisabled = false;
    this->m_bDisableHomingDebugDisp = false;
    this->m_HitEffect_Guard = NULL;
    this->m_HitEffect_Self = NULL;
    this->m_MoveStartEffect = NULL;
    this->m_vMoveStartEffectScale = 0.00f;
    this->m_OuterBodyCollPrim = NULL;
    this->m_bOwnHit = false;
}

