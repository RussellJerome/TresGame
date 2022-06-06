#include "TresWinniePuzzleUnitControllerBase.h"

UTresWinniePuzzleUnitControllerBase::UTresWinniePuzzleUnitControllerBase() {
    this->ClusterUnitsMaxNumWhenSpawnUnits = 0;
    this->MatchingCheckMaxTimesWhenSpawnUnits = 0;
    this->CollisionUnitRef = NULL;
    this->UnitMaxRows = 0;
    this->UnitMaxColumns = 0;
    this->UnitSpawnRows = 0;
    this->UnitSpawnColumns = 0;
    this->UnitHorizontalSpacing = 0.00f;
    this->UnitVerticalSpacing = 0.00f;
    this->RemoveTargetClusterUnitsMinNum = 0;
    this->UnitRemovingHeightMin = 0.00f;
    this->UnitRemovingHeightMax = 0.00f;
    this->UnitRemovingSpeed = 0.00f;
    this->UnitRemovingChangeScaleTiming = 0.00f;
    this->UnitRemovingDelayTimeCorrectionValue = 0.00f;
    this->UnitSpringOutHeight = 0.00f;
    this->UnitSpringOutSpeed = 0.00f;
    this->SpringOutUnitLandingParticle = NULL;
    this->FlipUnitMovingSpeed = 0.00f;
    this->FlipUnitMovingDelayTimeCorrectionValue = 0.00f;
    this->FlipUnitMovingStartJudgementDistance = 0.00f;
    this->FlipUnitParticle = NULL;
    this->TakenDamageParticle = NULL;
    this->TakenDamageParticleWhichGetInvolved = NULL;
    this->VibrationPowerWhenTakenDamage = 0.00f;
    this->VibrationTimeWhenTakenDamage = 0.00f;
    this->VibrationDelayTimeWhenTakenDamage = 0.00f;
    this->BlinkCurveWhenTakenDamage = NULL;
    this->UnitScalingSpeedForColorBlind = 0.00f;
    this->UnitScalingCurveForColorBlind = NULL;
    this->ResetUnitScaleWhenShoot = false;
    this->AutoGrowTurnNum = 0;
    this->AutoGrowUnitNum = 0;
    this->AutoGrowDistance = 0.00f;
    this->AutoGrowMoveHeight = 0.00f;
    this->AutoGrowMoveSpeed = 0.00f;
    this->m_unitsRoot = WinniePuzzleVagetableUnitRoot::UnitRootEast;
}

