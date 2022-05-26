#include "TresAttack9_e_ex781_EnergyBreak.h"

UTresAttack9_e_ex781_EnergyBreak::UTresAttack9_e_ex781_EnergyBreak() {
    this->m_EnergyBreakWaitTime = 0.20f;
    this->m_EnergyBreakTime = 3.00f;
    this->m_EnergyBreakAttackDelayTime = 0.20f;
    this->m_PrizeHPsClass = NULL;
    this->m_PrizeHPlClass = NULL;
    this->m_PrizeBattleItemClass = NULL;
    this->m_PrizeMoignetMedalClass = NULL;
    this->m_BeamClass = NULL;
    this->m_WindForce = 0.00f;
    this->m_StrongWindForce = 0.00f;
    this->m_InitWindRange = 50.00f;
    this->m_MaxWindRange = 1000.00f;
    this->m_WindStretchSpeed = 3000.00f;
    this->m_VacuumedHPIntervalTime = 0.50f;
    this->m_SteeleHP = 2.00f;
    this->m_VacuumedHPUpModeDist = 300.00f;
    this->m_VacuumedHPUpSteeleHP = 0.00f;
    this->m_VacuumedHPUpPrizeNum = 0;
    this->m_EaroSuccessRotRate = 0.40f;
    this->m_RotOffset = 90.00f;
    this->m_AttackCollisionAttackUpdateTime = 0.00f;
    this->m_VacuumedHPUpTime = 0.50f;
    this->m_VacuumedHPUpWindForce = 5.00f;
    this->m_BindTime = 1.00f;
    this->m_ChaseDist = 500.00f;
    this->m_ChaseSpeedMax = 500.00f;
    this->m_ChaseSpeedMin = 0.00f;
    this->m_ChaseAddSpeed = 500.00f;
    this->m_ChaseDownSpeed = 500.00f;
    this->m_RotInitRate = 0.03f;
    this->m_RotAddRate = 0.10f;
    this->m_RotMaxRate = 0.10f;
    this->m_ChaseEndHigh = 30.00f;
    this->m_EnergyBreakParticleEffData = NULL;
    this->m_SuccessAttackDist = 0.00f;
    this->m_AllwaysSuccess = false;
    this->PlayVoiceRate = 0;
    this->m_EnergyBreakBeam = NULL;
    this->m_EnergyBreakParticleEff = NULL;
    this->m_Camera = NULL;
}

