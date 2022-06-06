#include "TresLocomotionDefinitionAirCodeDriven.h"

UTresLocomotionDefinitionAirCodeDriven::UTresLocomotionDefinitionAirCodeDriven() {
    this->m_FlightStartAnimData = NULL;
    this->m_FlightLoopAnimData = NULL;
    this->m_FlightEndAnimData = NULL;
    this->m_bUseFalling = false;
    this->m_bUseTakeoff = false;
    this->m_TakeoffAnimData = NULL;
    this->m_bUseLanding = false;
    this->m_LandingStartAnimData = NULL;
    this->m_LandingLoopAnimData = NULL;
    this->m_LandingEndAnimData = NULL;
    this->m_bUseRiseAndDescend = false;
    this->m_RiseStartAnimData = NULL;
    this->m_RiseLoopAnimData = NULL;
    this->m_RiseEndAnimData = NULL;
    this->m_DescendStartAnimData = NULL;
    this->m_DescendLoopAnimData = NULL;
    this->m_DescendEndAnimData = NULL;
    this->m_RiseAndDescendMaxSpeed = 400.00f;
    this->m_RiseAndDescendAcceleration = 100.00f;
    this->m_MinRiseAndDescendHeight = 300.00f;
    this->m_RiseAndDescendConePitch = -20.00f;
    this->m_RiseAndDescendConeAngle = 5.00f;
}

