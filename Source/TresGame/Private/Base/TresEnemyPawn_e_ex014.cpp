#include "TresEnemyPawn_e_ex014.h"

void ATresEnemyPawn_e_ex014::SetDebugStateNo(int32 NO) {
}

bool ATresEnemyPawn_e_ex014::IsCooperation() {
    return false;
}

FRotator ATresEnemyPawn_e_ex014::GetTanpopoBoneRot() const {
    return FRotator{};
}

float ATresEnemyPawn_e_ex014::GetTanpopoBoneAlpha() const {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ex014::GetDebugStateNo() {
    return 0;
}

void ATresEnemyPawn_e_ex014::DebugSetAppearState(TEnumAsByte<ETresEnemySetAppearMode> mode) {
}

ATresEnemyPawn_e_ex014::ATresEnemyPawn_e_ex014() {
    this->m_CoopDummyPawn = NULL;
}

