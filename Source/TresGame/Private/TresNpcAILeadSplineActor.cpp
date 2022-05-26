#include "TresNpcAILeadSplineActor.h"

bool ATresNpcAILeadSplineActor::IsGoalActor() const {
    return false;
}

FVector ATresNpcAILeadSplineActor::GetLocationClosest(const FVector& InLocation) const {
    return FVector{};
}

FVector ATresNpcAILeadSplineActor::GetLastPointLocation() const {
    return FVector{};
}

float ATresNpcAILeadSplineActor::GetInputKeyClosestRatio(const FVector& InLocation) const {
    return 0.0f;
}

float ATresNpcAILeadSplineActor::GetInputKeyClosest(const FVector& InLocation) const {
    return 0.0f;
}

FVector ATresNpcAILeadSplineActor::GetDirectionClosest(const FVector& InLocation) const {
    return FVector{};
}

ATresNpcAILeadSplineActor::ATresNpcAILeadSplineActor() {
    this->m_bStartPoint = false;
    this->m_Mode = TRES_FNPC_AI_LEAD_MODE_LEAD;
    this->m_MoveType = TRES_FNPC_AI_LEAD_MOVE_RUN;
    this->m_PredictionDistance = 450.00f;
    this->m_LeadWaitEnterDistance = 1800.00f;
    this->m_LeadRestartDistance = 1000.00f;
    this->m_bReleaseDistance = false;
    this->m_ReleaseDistance = 3000.00f;
    this->m_FinishTiming = TRES_FNPC_AI_LEAD_FINISH_ALL_UP;
    this->m_GoalAction = TRES_FNPC_AI_LEAD_GOAL_WAIT;
    this->m_GoalWaitReleaseType = TRES_FNPC_AI_LEAD_GOAL_WAIT_R_DIST;
    this->m_bGoalWaitReleaseDistance = false;
    this->m_GoalWaitReleaseDistance = 300.00f;
    this->m_bGoalWaitReleaseSplineTime = false;
    this->m_GoalWaitReleaseSplineTime = 0.90f;
    this->m_bWaitEnterPoint = false;
    this->m_bChangeMoveType = false;
    this->m_ChangeMoveType = TRES_FNPC_AI_LEAD_MOVE_RUN;
    this->m_bGoalTurn = false;
    this->m_GoalTurnAngle = 0.00f;
    this->m_bGoalLookAtCharaID = true;
    this->m_GoalLookAtCharaID = ETresChrUniqueID::TRES_CHR_UID_SORA;
    this->m_GoalDistance = 50.00f;
    this->m_SubLeadOffsets.AddDefaulted(2);
}

