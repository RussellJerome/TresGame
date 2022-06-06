#include "TresVehiclePawnSmallAirplane.h"
#include "TresReactorComponent.h"

void ATresVehiclePawnSmallAirplane::OnStartBossDefeatEffect() {
}

ATresVehiclePawnSmallAirplane::ATresVehiclePawnSmallAirplane() {
    this->m_ProjVulcan = NULL;
    this->m_ProjMissile = NULL;
    this->m_Param_InputPower = 3.00f;
    this->m_Param_VulcanTurnRate = 0.70f;
    this->m_Param_MovePitchMax = 70.00f;
    this->m_Param_AimDis = 3000.00f;
    this->m_Param_AimCenterFlag = false;
    this->m_Param_AttackTime = 0.05f;
    this->m_Param_MissileLockonDis = 150.00f;
    this->m_Param_DashSpeed = 7000.00f;
    this->m_Param_DashBrake = 0.98f;
    this->m_Param_DodgeLRSpeed = 5000.00f;
    this->m_Param_DodgeLRBrake = 0.98f;
    this->m_Param_DodgeLRDirRate = 0.70f;
    this->m_Param_DodgeInputRate = 0.50f;
    this->m_Reactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresShipReactor"));
    this->m_Camera = NULL;
}

