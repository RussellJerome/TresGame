#include "TresNpcPawn_n_bx202.h"

float ATresNpcPawn_n_bx202::GetRightArmAlpha() const {
    return 0.0f;
}

float ATresNpcPawn_n_bx202::GetAimOffsetAlpha() const {
    return 0.0f;
}

FRotator ATresNpcPawn_n_bx202::GetAimOffset() const {
    return FRotator{};
}

ATresNpcPawn_n_bx202::ATresNpcPawn_n_bx202() {
    this->m_FRBaymaxRideBP = NULL;
    this->m_NpcEffectDataAsset = NULL;
    this->m_AppendCure = 140;
    this->m_fIntervalTime = 5.00f;
}

