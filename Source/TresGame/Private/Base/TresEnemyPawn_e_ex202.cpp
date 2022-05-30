#include "TresEnemyPawn_e_ex202.h"

class UTresEnemyControlVolumeData_e_ex202;
class AActor;

bool ATresEnemyPawn_e_ex202::IsSnakeMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex202::IsInLinkActorRadius() const {
    return false;
}

bool ATresEnemyPawn_e_ex202::IsFlowerMode() const {
    return false;
}

UTresEnemyControlVolumeData_e_ex202* ATresEnemyPawn_e_ex202::GetLinkActorData() const {
    return NULL;
}

float ATresEnemyPawn_e_ex202::GetCoopAddMotionAlpha() const {
    return 0.0f;
}

FRotator ATresEnemyPawn_e_ex202::GetAimOffsetValue() {
    return FRotator{};
}

float ATresEnemyPawn_e_ex202::GetAddMotionAlpha() const {
    return 0.0f;
}

void ATresEnemyPawn_e_ex202::BP_ToFlower() {
}

void ATresEnemyPawn_e_ex202::BP_DebugSetBT(int32 Index) {
}

AActor* ATresEnemyPawn_e_ex202::BP_DebugGetNearLinkActorEntry() const {
    return NULL;
}

ATresEnemyPawn_e_ex202::ATresEnemyPawn_e_ex202() {
    this->m_AppearActionMode = ETresEnemyEx202ActionMode::TRES_ENEMY_EX202_ACTIONMODE_SNAKE;
    this->m_ThresholdAngle = 180.00f;
    this->m_NumIdle = 2;
    this->m_FlowerTossAnimSet = NULL;
    this->m_bTestTossDamage = false;
    this->m_TestBlowHeightRate = 1.00f;
    this->m_bAimOffset = false;
    this->m_bTest = false;
    this->m_Angle = 1.00f;
}

