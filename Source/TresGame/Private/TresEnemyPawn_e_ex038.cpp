#include "TresEnemyPawn_e_ex038.h"

bool ATresEnemyPawn_e_ex038::IsMagicSquare() {
    return false;
}

bool ATresEnemyPawn_e_ex038::IsAeroCutterMax() {
    return false;
}

int32 ATresEnemyPawn_e_ex038::GetAeroCutterNum() {
    return 0;
}

void ATresEnemyPawn_e_ex038::Debug_ForcingCancelMagicSquare() {
}

ATresEnemyPawn_e_ex038::ATresEnemyPawn_e_ex038() {
    this->m_pAeroCutter[0] = NULL;
    this->m_pAeroCutter[1] = NULL;
    this->m_pAeroCutter[2] = NULL;
    this->m_bMagicSquare = false;
    this->m_AeroCutter_ScaleHigh = 0.70f;
    this->m_AeroCutter_ScaleMiddle = 1.00f;
    this->m_AeroCutter_ScaleLow = 0.50f;
    this->m_AeroCutter_BodyDist = 100.00f;
    this->m_AeroCutter_PosOffsetZ = 60.00f;
    this->m_AeroCutter_PosRangeZ = 60.00f;
    this->m_AeroCutter_HighRotSpeedZ = 150.00f;
    this->m_AeroCutter_MiddleRotSpeedZ = 150.00f;
    this->m_AeroCutter_LowRotSpeedZ = 150.00f;
    this->m_EffDataAsset = NULL;
    this->m_pro_Attack2_VanishTime = 1.20f;
    this->m_pro_Attack2_FireAeroStormTime = 2.00f;
    this->m_pro_Attack2_DistSt = 100.00f;
    this->m_pro_Attack2_DistEnd = 200.00f;
    this->m_pro_Attack2_RotSpeed = 300.00f;
    this->m_pro_Attack2_AeroStormMoveSpeed = 500.00f;
    this->m_pro_Attack2_AeroStormMoveSpeedTime = 1.00f;
    this->m_pro_Attack2_AeroStormMoveTime = 5.00f;
    this->m_pro_Attack2_AeroStormTurnRate = 0.10f;
}

