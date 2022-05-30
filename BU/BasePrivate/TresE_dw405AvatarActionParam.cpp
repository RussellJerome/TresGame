#include "TresE_dw405AvatarActionParam.h"

FTresE_dw405AvatarActionParam::FTresE_dw405AvatarActionParam() {
    this->AppearDelayTime = 0.00f;
    this->AppearOffsetAngle = 0.00f;
    this->AnimData = NULL;
    this->SoundData = NULL;
    this->AppearDistance = 0.00f;
    this->AppearHeight = 0.00f;
    this->bAnimPlayFallEnd = false;
    this->MoveSpeed = 0.00f;
    this->bEnableVigilanceMove = false;
    this->VigilanceMoveVec = TRES_ENEMY_DW405_VIGILANCE_MOVE_RIGHT;
    this->bEnableSettingDisappearTime = false;
    this->DisappearTime = 0.00f;
}

