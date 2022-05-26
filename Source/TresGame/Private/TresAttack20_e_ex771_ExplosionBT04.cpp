#include "TresAttack20_e_ex771_ExplosionBT04.h"

UTresAttack20_e_ex771_ExplosionBT04::UTresAttack20_e_ex771_ExplosionBT04() {
    this->m_ExplosionOmen = NULL;
    this->m_HvnDebrisGenerator = NULL;
    this->m_HvnDebrisBlowGenerator = NULL;
    this->m_DebrisConvEff = NULL;
    this->m_pro_AttractClass = NULL;
    this->m_pro_ExExplosionOmenLifeTime = 15.00f;
    this->m_pro_ExExplosionOmen2LifeTime = 0.50f;
    this->m_pro_ExNotAttractRange = 150.00f;
    this->m_pro_ExAttractForce = 750.00f;
    this->m_pro_ExAttractForce2 = 2000.00f;
    this->m_pro_ExFarstEncloseFlareChantTime = 3.00f;
    this->m_pro_ExEncloseFlareChantTime = 6.00f;
    this->m_pro_ExEncloseFlareInvoTime = 3.00f;
    this->m_pro_ExZHomingRate = 0.08f;
    this->m_pro_ExZHomingDist = 300.00f;
    this->m_pro_ExOmenTime = 0.50f;
    this->m_pro_ExOmenEffEndTime = 0.00f;
    this->m_pro_ExBombWaitTime = 0.50f;
    this->m_pro_ExBindDist = 600.00f;
    this->m_pro_ExBindHeight = -150.00f;
    this->m_pro_ExBindTime = 1.30f;
    this->m_pro_ExBindAfterTime = 0.60f;
    this->m_pro_ExEncloseFlareHitExplosionStTime = 1.00f;
    this->m_pro_ExExplosionOmenHitExplosionStTime = 0.75f;
    this->m_pro_DebrisSpawnNum = 5;
    this->m_pro_DebrisSpawnInterval = 0.10f;
    this->m_pro_HvnDebrisGeneratorClass = NULL;
    this->m_pro_DebrisConvEffData = NULL;
    this->m_pro_LivelyDebrisBlowSpawnNum = 30;
    this->m_pro_DebrisBlowMoveMinSpeed = 4000.00f;
    this->m_pro_DebrisBlowMoveMaxSpeed = 6000.00f;
    this->m_pro_DebrisBlowMinScale = 1.00f;
    this->m_pro_DebrisBlowMaxScale = 1.00f;
    this->m_pro_HvnDebrisBlowGeneratorClass = NULL;
}

