#include "TresEnemyPawn_e_he903.h"
#include "TresDebrisComponent_e_he903.h"
#include "TresSplineManager_e_he903.h"

bool ATresEnemyPawn_e_he903::IsPlayerFloatingMode() const {
    return false;
}

bool ATresEnemyPawn_e_he903::IsNowBigTornado() {
    return false;
}

bool ATresEnemyPawn_e_he903::IsFloatingTimeOver() {
    return false;
}

ATresEnemyPawn_e_he903::ATresEnemyPawn_e_he903() {
    this->m_DebrisComponent = CreateDefaultSubobject<UTresDebrisComponent_e_he903>(TEXT("DebrisComponent"));
    this->m_SplineManager = CreateDefaultSubobject<UTresSplineManager_e_he903>(TEXT("SplineManager"));
    this->m_WaterCurrentCollision = NULL;
    this->m_Actor_L_ude = NULL;
    this->m_Actor_R_ude = NULL;
    this->m_LockonComp_Land = NULL;
    this->m_LockonComp_Air = NULL;
    this->m_fRotRate = 360.00f;
    this->m_fExtendStopTimeAfterAthleticFlow = 0.00f;
    this->m_fMountCameraChangeWaitTime = 0.00f;
    this->m_bFirstBattlePawn = false;
    this->m_bCanGenerateDebris = false;
    this->m_fDebrisEvadeSmoothRate = 1.00f;
    this->m_fDebrisEvadeRate = 1.00f;
    this->m_fDebrisTitanEvadeSmoothRate = 1.00f;
    this->m_fDebrisTitanEvadeRate = 1.00f;
    this->m_bDebugDispDebrisEvade = false;
    this->m_LookAtTarget = NULL;
    this->m_BlowAttachActor = NULL;
}

