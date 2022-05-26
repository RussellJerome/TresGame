#include "TresEnemyEx353ThornBeamAfterHitInfo.h"

FTresEnemyEx353ThornBeamAfterHitInfo::FTresEnemyEx353ThornBeamAfterHitInfo() {
    this->CatchAfterSituation = ETresEnemyEx353CatchAfterSituation::ChangeSituation;
    this->bIsMoveShield = false;
    this->CanMoveShieldMinDist = 0.00f;
    this->CanMoveShieldMaxDist = 0.00f;
    this->AimShieldSpeed = 0.00f;
    this->MinMoveDist = 0.00f;
    this->EndMoveTime = 0.00f;
}

