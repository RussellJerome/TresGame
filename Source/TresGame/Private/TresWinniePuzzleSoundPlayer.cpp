#include "TresWinniePuzzleSoundPlayer.h"

UTresWinniePuzzleSoundPlayer::UTresWinniePuzzleSoundPlayer() {
    this->BGMRef = NULL;
    this->SwitchBGMSectionGraceTime = 0.00f;
    this->BGMFadeOutTime = 0.00f;
    this->EnableOverwritePlayVoice = false;
    this->RabbitHarvestedGoodJudgementUnitsNum = 0;
    this->PlayPlayerReplyVoiceWaitTimeWhenInvokeCharacterBonus = 0.00f;
    this->PlayCharacterBonusGaugeMAXVoiceIntervalTime = 0.00f;
}

