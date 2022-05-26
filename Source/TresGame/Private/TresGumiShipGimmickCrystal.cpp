#include "TresGumiShipGimmickCrystal.h"

void ATresGumiShipGimmickCrystal::_SetUpCrystal(int32 Min, int32 Max, bool spawn) {
}

float ATresGumiShipGimmickCrystal::_GetRecoveryPoint() {
    return 0.0f;
}

float ATresGumiShipGimmickCrystal::_GetRecoveryInversePoint() {
    return 0.0f;
}

void ATresGumiShipGimmickCrystal::_CheckTreasureMap() {
}

ATresGumiShipGimmickCrystal::ATresGumiShipGimmickCrystal() {
    this->m_NowHitPoint = 0.00f;
    this->m_MaxHP = 0;
    this->m_MaxHitPoint = 3000;
    this->m_MidHitPoint = 2000;
    this->m_MinHitPoint = 1000;
    this->m_Rarity = 0;
    this->m_MinCount = 1;
    this->m_MaxCount = 5;
    this->m_LotteryDataTable = NULL;
    this->m_WorldMapSpecialID = ETresGumiShipSpecialCrystalID::SPECIAL_CRYSTAL_MAX;
    this->m_WorldMapGumiID = ETresGumiShipGumiCrystalID::GUMI_CRYSTAL_MAX;
    this->m_fRecoveryPoint = 100.00f;
}

