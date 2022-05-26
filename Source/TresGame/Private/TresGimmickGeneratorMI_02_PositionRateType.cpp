#include "TresGimmickGeneratorMI_02_PositionRateType.h"

void ATresGimmickGeneratorMI_02_PositionRateType::spawn() {
}

void ATresGimmickGeneratorMI_02_PositionRateType::RefreshPosition(float Position) {
}

float ATresGimmickGeneratorMI_02_PositionRateType::GetMoveSpeedOneframe() {
    return 0.0f;
}

float ATresGimmickGeneratorMI_02_PositionRateType::GetMoveSpeed() {
    return 0.0f;
}





ATresGimmickGeneratorMI_02_PositionRateType::ATresGimmickGeneratorMI_02_PositionRateType() {
    this->CreateNum = 10;
    this->Curve = NULL;
    this->MoveCompleteTime = 2.00f;
    this->WaitTime = 2.00f;
    this->ObjectLifes.AddDefaulted(1);
    this->GeneratedClass = NULL;
    this->m_InterventionActorClass = NULL;
}

