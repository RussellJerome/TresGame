#include "TresGimmickRA_Impression_SplashWater.h"

class ATresCharPawnBase;
class UTresReactorComponent;


void ATresGimmickRA_Impression_SplashWater::OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent) {
}

void ATresGimmickRA_Impression_SplashWater::ExecSplashWater() {
}

ATresGimmickRA_Impression_SplashWater::ATresGimmickRA_Impression_SplashWater() {
    this->m_pReactor = NULL;
}

