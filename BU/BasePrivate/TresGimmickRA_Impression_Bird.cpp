#include "TresGimmickRA_Impression_Bird.h"

class ATresCharPawnBase;
class UTresReactorComponent;

void ATresGimmickRA_Impression_Bird::StartMission() {
}




void ATresGimmickRA_Impression_Bird::OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent) {
}

bool ATresGimmickRA_Impression_Bird::IsFollowingPc() const {
    return false;
}

void ATresGimmickRA_Impression_Bird::ExecLanding() {
}

void ATresGimmickRA_Impression_Bird::ExecIdle() {
}

void ATresGimmickRA_Impression_Bird::ExecFlyLoopAround() {
}

void ATresGimmickRA_Impression_Bird::ExecFlyLoop(bool bMove) {
}

void ATresGimmickRA_Impression_Bird::ExecFlyAwayFromFollow() {
}

void ATresGimmickRA_Impression_Bird::ExecFlyAway() {
}

void ATresGimmickRA_Impression_Bird::ExecApproach() {
}

ATresGimmickRA_Impression_Bird::ATresGimmickRA_Impression_Bird() {
    this->RotateSpeed = 0.00f;
    this->RunDistance = 0.00f;
    this->EscapeDistance = 0.00f;
    this->RunStateEscapeTime = 0.00f;
    this->EscapeRotationInterpolationTime = 0.00f;
    this->Flag_UseSplineSecondPoint = false;
    this->Flag_DrawLookAtLoc = false;
    this->Flag_RootRotSlerpFlyAway = false;
    this->EffectDataAsset = NULL;
    this->BirdEffectID = 0;
    this->LookAtAnimPawnBP = NULL;
    this->LookAtTargetBP = NULL;
    this->m_pReactor = NULL;
    this->m_pLookAtAnimPawn = NULL;
    this->m_pLookAtActor = NULL;
}

