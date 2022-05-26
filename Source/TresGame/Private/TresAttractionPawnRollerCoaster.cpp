#include "TresAttractionPawnRollerCoaster.h"

ATresAttractionPawnRollerCoaster::ATresAttractionPawnRollerCoaster() {
    this->m_RailEffectClass = NULL;
    this->m_RailEffectLeadDist = 600.00f;
    this->m_PassengerCarClass = NULL;
    this->m_NumOfPassengerCar = 8;
    this->m_LeadMarkerClass = NULL;
    this->m_GateEffectClass = NULL;
    this->m_LeadMarkerLeadTime = 3.00f;
    this->m_ProjectileFireEffectAsset = NULL;
    this->m_ProjectileHitEffectAsset = NULL;
    this->m_ProjectileMatchlessHitEffectAsset = NULL;
    this->m_ProjectileMatchlessParticleReactionRange = 1000.00f;
    this->m_ProjectileHitMapEffectAsset = NULL;
    this->m_ProjectileNoHitEffectAsset = NULL;
    this->m_FinishProjectileEffectAsset = NULL;
    this->m_RapidFireInterval = 0.10f;
    this->m_FireVoiceIntervalMin = 1.70f;
    this->m_FireVoiceIntervalMax = 3.00f;
    this->m_fJumpAfterWaitTime = 1.20f;
    this->m_bAutoFinishCommand = true;
    this->m_fFinishCommandTimer = 120.00f;
    this->m_fFinishStartWaitTime = 1.00f;
    this->m_fFinishAttackWaitTime = 1.00f;
    this->m_fFinishEndWaitTime = 2.50f;
    this->m_ProjNormal = NULL;
    this->m_ProjMatchlessNormal = NULL;
    this->m_ProjWeak = NULL;
    this->m_ProjFinish = NULL;
    this->m_AttachEffect = NULL;
    this->m_AttachEffect2 = NULL;
}

