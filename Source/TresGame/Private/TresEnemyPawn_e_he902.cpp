#include "TresEnemyPawn_e_he902.h"

FTransform ATresEnemyPawn_e_he902::BP_GetLegFixTransform_R() const {
    return FTransform{};
}

FTransform ATresEnemyPawn_e_he902::BP_GetLegFixTransform_L() const {
    return FTransform{};
}

float ATresEnemyPawn_e_he902::BP_GetLegFixRate_R() const {
    return 0.0f;
}

float ATresEnemyPawn_e_he902::BP_GetLegFixRate_L() const {
    return 0.0f;
}

ATresEnemyPawn_e_he902::ATresEnemyPawn_e_he902() {
    this->m_LegFixBoneName_L = TEXT("L_ashi");
    this->m_LegFixBoneName_R = TEXT("R_ashi");
}

