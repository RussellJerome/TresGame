#include "TresEnemyPawn_e_ex107.h"

void ATresEnemyPawn_e_ex107::OnDtorStateEvent(TEnumAsByte<ETresStateID> inStateID) {
}

void ATresEnemyPawn_e_ex107::BP_DebugAppear(TEnumAsByte<ETresEnemySetAppearMode> AppearMode, float AppearTime) {
}

ATresEnemyPawn_e_ex107::ATresEnemyPawn_e_ex107() {
    this->m_DropPawn = NULL;
    this->m_WeaponAppearParticleSystem = NULL;
    this->m_WeaponVisibleInterpTime = 0.20f;
    this->m_FallAnimBlendTime = 0.10f;
    this->m_Scale = 1.00f;
    this->m_ParameterScale = 1.00f;
}

