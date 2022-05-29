#include "TresEnemyEx353ThornBeamProjectileInfo.h"

FTresEnemyEx353ThornBeamProjectileInfo::FTresEnemyEx353ThornBeamProjectileInfo() {
    this->FireDelayTime = 0.00f;
    this->InitialSpeed = 0.00f;
    this->AccelSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->HomingStartTime = 0.00f;
    this->HomingAbsTime = 0.00f;
    this->HomingSpeedXY = 0.00f;
    this->HomingAccelSpeedXY = 0.00f;
    this->HomingMaxSpeedXY = 0.00f;
    this->HomingSpeedZ = 0.00f;
    this->HomingAccelSpeedZ = 0.00f;
    this->HomingMaxSpeedZ = 0.00f;
    this->HomingMinDist = 0.00f;
    this->MissMinDist = 0.00f;
    this->MissMaxDist = 0.00f;
    this->MissMinHeight = 0.00f;
    this->MissMaxHeight = 0.00f;
    this->bIsSetAngle = false;
    this->MissMinAngle = 0.00f;
    this->MissMaxAngle = 0.00f;
    this->bIsDecelSpeed = false;
    this->DecelStartTime = 0.00f;
    this->DecelSpeed = 0.00f;
}

