#include "TresWinniePuzzleCharacterBonusBombParam.h"

FTresWinniePuzzleCharacterBonusBombParam::FTresWinniePuzzleCharacterBonusBombParam() {
    this->FailTimes = 0;
    this->FailTimesAdditionalInvocation = 0;
    this->MoveWaitTime = 0.00f;
    this->FloatMoveDistance = 0.00f;
    this->SuccessFloatMoveDistance = 0.00f;
    this->FloatMoveVerticalAngle = 0.00f;
    this->FloatMoveHorizontalAngle = 0.00f;
    this->FloatMoveSpeed = 0.00f;
    this->FloatMoveDelayTimeCorrectionValue = 0.00f;
    this->FloatTime = 0.00f;
    this->FloatMoveCurve = NULL;
    this->MoveHeightMin = 0.00f;
    this->MoveHeightMax = 0.00f;
    this->MoveSpeed = 0.00f;
    this->MoveDelayTimeCorrectionValue = 0.00f;
    this->GotoFillUnitsPhaseWaitTime = 0.00f;
    this->AppearParticle = NULL;
    this->MoveParticle = NULL;
    this->ComeOutParticleOnReadyAttachData = NULL;
    this->ComeOutParticleOnDiveAttachData = NULL;
}

