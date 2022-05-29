#include "TresProjectile_e_ex017_MagicSquare.h"

float ATresProjectile_e_ex017_MagicSquare::GetRevolverBoneRoll() const {
    return 0.0f;
}

float ATresProjectile_e_ex017_MagicSquare::GetRevolverBoneBlendRate() const {
    return 0.0f;
}

float ATresProjectile_e_ex017_MagicSquare::GetHoveringZ() const {
    return 0.0f;
}

ATresProjectile_e_ex017_MagicSquare::ATresProjectile_e_ex017_MagicSquare() {
    this->m_JointEff[0] = NULL;
    this->m_JointEff[1] = NULL;
    this->m_JointEff[2] = NULL;
    this->m_JointEff[3] = NULL;
    this->m_JointEff[4] = NULL;
    this->m_JointEffData = NULL;
    this->m_MoveRate = 0.20f;
    this->m_HoveringHeight = 30.00f;
    this->m_HoveringSpeedRate = 1.00f;
    this->m_pro_EffDataAsset = NULL;
}

