#include "TresEnemyPawn_e_ex106.h"

bool ATresEnemyPawn_e_ex106::IsMeshVisible() {
    return false;
}

void ATresEnemyPawn_e_ex106::BP_ModifyLazerPointerLength(const FVector& TargetLocation, float LazerPointerScale) {
}

void ATresEnemyPawn_e_ex106::BP_InstallationPoint(const FVector& HitLocation) {
}

void ATresEnemyPawn_e_ex106::BP_DeletePointer() {
}

void ATresEnemyPawn_e_ex106::BP_DeleteLazerPointer() {
}

void ATresEnemyPawn_e_ex106::BP_CreatePointer() {
}

void ATresEnemyPawn_e_ex106::BP_CreateLazerPointer(FName AttachPointName) {
}

ATresEnemyPawn_e_ex106::ATresEnemyPawn_e_ex106() {
    this->m_LazerPointerEff = NULL;
    this->m_PointerEff = NULL;
    this->m_LazerEffData = NULL;
    this->m_PointerEffData = NULL;
    this->m_PointerOffset = 5.00f;
    this->m_LazerPointerLengthExtra = 200.00f;
    this->m_LazerDebug = false;
}

