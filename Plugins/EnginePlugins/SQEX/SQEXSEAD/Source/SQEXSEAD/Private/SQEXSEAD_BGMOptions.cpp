#include "SQEXSEAD_BGMOptions.h"

FSQEXSEAD_BGMOptions::FSQEXSEAD_BGMOptions() {
    this->Priority = 0;
    this->StoreBehaviour = ESQEXSEAD_BGMStoreBehaviour::Stop;
    this->StopBehaviour = ESQEXSEAD_BGMStopBehaviour::Stop;
    this->PlayFadeInTime = 0.00f;
    this->ResumeFadeInTime = 0.00f;
    this->SuspendFadeOutTime = 0.00f;
    this->StopFadeOutTime = 0.00f;
    this->StaySuspendTime = 0.00f;
    this->bUnreferenceAsset = false;
    this->bRestoreAfterFinish = false;
}

