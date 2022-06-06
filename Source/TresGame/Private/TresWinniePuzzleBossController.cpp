#include "TresWinniePuzzleBossController.h"

UTresWinniePuzzleBossController::UTresWinniePuzzleBossController() {
    this->IsBossUnitExist = false;
    this->BossUnitRef = NULL;
    this->BossCollisionUnitRef = NULL;
    this->BossUnitRow = 0;
    this->BossUnitColumn = 0;
    this->SpringOutObstacleUnit = false;
    this->ObstacleUnitMovingDelayTimeCorrectionValue = 0.00f;
    this->TakenDamageParticle = NULL;
    this->FinalDamageParticle = NULL;
    this->HitPointMax = 0;
    this->VibrationPowerWhenTakenDamage = 0.00f;
    this->VibrationTimeWhenTakenDamage = 0.00f;
    this->BlinkCurveWhenTakenDamage = NULL;
}

