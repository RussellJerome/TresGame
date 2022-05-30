#include "TresGimmickRA_Pudding_ControlActor.h"

class ATresCharPawnBase;
class UTresReactorComponent;

void ATresGimmickRA_Pudding_ControlActor::OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent) {
}

ATresGimmickRA_Pudding_ControlActor::ATresGimmickRA_Pudding_ControlActor() {
    this->WanderPudding = false;
    this->WanderRange = 0.00f;
    this->WanderReactRange = 0.00f;
    this->ReactToPlayer = false;
    this->ReactDistance = 0.00f;
    this->ResetOnPCLeave = false;
    this->IgnoreGravity = false;
    this->IgnoreShutter = false;
    this->DebugFlag_DebugDraw = false;
    this->EditorInfoComp = NULL;
    this->m_pPC = NULL;
    this->m_pReactor = NULL;
    this->m_pPudMng = NULL;
}

