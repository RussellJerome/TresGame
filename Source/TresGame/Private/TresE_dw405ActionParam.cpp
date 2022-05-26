#include "TresE_dw405ActionParam.h"

FTresE_dw405ActionParam::FTresE_dw405ActionParam() {
    this->AutoLockOnRange = 0.00f;
    this->bEnableInvincible = false;
    this->GameLevelLimitTime[0] = 0.00f;
    this->GameLevelLimitTime[1] = 0.00f;
    this->GameLevelLimitTime[2] = 0.00f;
    this->GameLevelLimitTime[3] = 0.00f;
    this->LimitOverDisappearRandomTIme = 0.00f;
    this->bEnableAppear = false;
    this->EndActionOffsetTime = 0.00f;
    this->StartAnimData = NULL;
    this->AnimData = NULL;
    this->SoundData = NULL;
    this->AppearDistance = 0.00f;
    this->bEnableFixingAppearAngle = false;
    this->FixingAppearAngle = 0.00f;
    this->AppearMaxAngle = 0.00f;
    this->AppearHeight = 0.00f;
    this->bAnimPlayFallEnd = false;
    this->MoveSpeed = 0.00f;
    this->bEnableVigilanceMove = false;
    this->MoveHomingAngle = 0.00f;
    this->VigilanceMoveVec = TRES_ENEMY_DW405_VIGILANCE_MOVE_RIGHT;
    this->bEnableSettingDisappearTime = false;
    this->DisappearTime = 0.00f;
    this->bEnableSettingDisappearRange = false;
    this->DisappearRange = 0.00f;
    this->DisappearDelayTime = 0.00f;
    this->bEnableSettingAvatarDisappearRange = false;
    this->AvatarDisappearRange = 0.00f;
    this->TurnToTargetAngle = 0.00f;
    this->TurnToTargetHeight = 0.00f;
    this->TurnToTargetDistance = 0.00f;
    this->SoundPlayStartTime = 0.00f;
    this->CounterRate = 0.00f;
}

