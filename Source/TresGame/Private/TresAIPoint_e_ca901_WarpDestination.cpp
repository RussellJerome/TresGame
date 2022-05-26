#include "TresAIPoint_e_ca901_WarpDestination.h"

TEnumAsByte<ETresEnemyca901WarpKind> ATresAIPoint_e_ca901_WarpDestination::BP_GetWarpKind() {
    return TRES_ENEMY_CA901_WARP_FIXEDPlACE;
}

bool ATresAIPoint_e_ca901_WarpDestination::BP_CompareWarpKind(const TEnumAsByte<ETresEnemyca901WarpKind> WarpKind) {
    return false;
}

ATresAIPoint_e_ca901_WarpDestination::ATresAIPoint_e_ca901_WarpDestination() {
    this->m_WarpKind = TRES_ENEMY_CA901_WARP_FIXEDPlACE;
}

