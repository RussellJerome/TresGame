#include "TresRaDanceNpc.h"

class UTresPlayerState_FestivalDance;

bool ATresRaDanceNpc::OnPlayerPerformed(UTresPlayerState_FestivalDance* InPlayerState, EDancePerformType perform, int32 performLevel) {
    return false;
}

void ATresRaDanceNpc::OnDanceRhythmBeatNear() {
}

void ATresRaDanceNpc::OnDanceRhythmBeat() {
}

ATresRaDanceNpc::ATresRaDanceNpc() {
    this->ActorType = EDanceActorType::MALE;
    this->StandByGroupID = 0;
    this->IdleLoop_FourBeatCount = 0;
    this->PerformanceZoneDistance = 0.00f;
    this->TargetLockZoneDistance = 0.00f;
    this->SuccessBeatCount = 0;
    this->PairDanceBeatCount = 0;
    this->WalkSpeed = 0.00f;
    this->RotateSpeed = 0.00f;
    this->SpinSuccessRotTime = -1.00f;
    this->StepSuccessRotTime = -1.00f;
    this->SafeDistanceFromWall = 30.00f;
    this->ClapHandsDistance = 0.00f;
    this->ClapHandsApproachTime = 0.00f;
    this->PairDanceChangeTime = 0.00f;
    this->PairDanceChangeWaitTime = 0.00f;
    this->PairOutDistance = 0.00f;
    this->PairOutDegree = 0.00f;
    this->PairOutInTurnStartTime = 0.00f;
    this->MaxPairInDistance = 0.00f;
    this->DefaultSplineMoveMode = ETresRaDanceAreaType::RA_DANCE_NORMAL;
    this->TargetMarkerEffectID_Spin = 0;
    this->TargetMarkerEffectID_Step = 0;
    this->m_MatData = NULL;
    this->m_pDanceMng = NULL;
    this->m_pDancePawn = NULL;
    this->m_ReplaceMatData = NULL;
    this->m_pPC = NULL;
}

