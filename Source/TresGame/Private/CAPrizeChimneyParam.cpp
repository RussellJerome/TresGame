#include "CAPrizeChimneyParam.h"

FCAPrizeChimneyParam::FCAPrizeChimneyParam() {
    this->m_MaxHitPoint = 0;
    this->m_spawnPrizeNumForNormalAttack = 0;
    this->m_spawnPrizeNumForDead = 0;
    this->m_prizeKind = ETresDropItemID::None;
    this->m_InitSpeed = 0.00f;
    this->m_InitSpeedRand = 0.00f;
    this->m_AirResistance = 0.00f;
    this->m_PrizeLivingTime = 0.00f;
}

