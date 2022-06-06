#include "TresEnemyPawn_e_he001a.h"
#include "TresSkeletalMeshComponent.h"

bool ATresEnemyPawn_e_he001a::IsRollerCoaster() const {
    return false;
}

bool ATresEnemyPawn_e_he001a::IsRightLegBreak() const {
    return false;
}

bool ATresEnemyPawn_e_he001a::IsLeftLegBreak() const {
    return false;
}

bool ATresEnemyPawn_e_he001a::IsDown() const {
    return false;
}

void ATresEnemyPawn_e_he001a::EnableLockon(bool bEnable) {
}

void ATresEnemyPawn_e_he001a::CancelHe001DownEvent() {
}

ATresEnemyPawn_e_he001a::ATresEnemyPawn_e_he001a() {
    this->MyCollMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresCollMesh0"));
    this->m_ChanceSlowRate = 0.20f;
    this->m_ChanceHitMax = 4;
    this->m_RollerCoasterRailStart = NULL;
    this->m_RollerCoasterCancel = NULL;
    this->m_FaceSlotBlendTime = 1.00f;
    this->m_BreakEff = NULL;
    this->m_BlurEffData1 = NULL;
    this->m_Attack234_WindRadius = 20000.00f;
    this->m_Attack234_WindStrength = 100.00f;
    this->m_Attack234_WindSpeed = 10.00f;
    this->m_Attack234_WindTime = 1.00f;
    this->m_BlurEff = NULL;
}

