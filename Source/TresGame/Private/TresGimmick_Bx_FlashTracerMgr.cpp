#include "TresGimmick_Bx_FlashTracerMgr.h"

void ATresGimmick_Bx_FlashTracerMgr::SetHighScore(ETresGimmickBxFlashTracerCourse Course, int32 Score) {
}

void ATresGimmick_Bx_FlashTracerMgr::SetClearTime(ETresGimmickBxFlashTracerCourse Course, float Time) {
}

void ATresGimmick_Bx_FlashTracerMgr::OpenResult(float Time, int32 Score, int32 Bonus, ETresUIHudBaymaxResult rankKind, bool RecordTime, bool RecordScore, ETresGimmickBxFlashTracerCourse Course) {
}

void ATresGimmick_Bx_FlashTracerMgr::OnClosedResult_Implementation() {
}

bool ATresGimmick_Bx_FlashTracerMgr::IsValidDebugRank() const {
    return false;
}

int32 ATresGimmick_Bx_FlashTracerMgr::GetHighScore(ETresGimmickBxFlashTracerCourse Course) const {
    return 0;
}

ETresUIHudBaymaxResult ATresGimmick_Bx_FlashTracerMgr::GetDebugRank() const {
    return ETresUIHudBaymaxResult::RankA;
}

float ATresGimmick_Bx_FlashTracerMgr::GetClearTime(ETresGimmickBxFlashTracerCourse Course) const {
    return 0.0f;
}




ATresGimmick_Bx_FlashTracerMgr::ATresGimmick_Bx_FlashTracerMgr() {
}

