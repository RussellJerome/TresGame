#include "TresFriendLinkPawnMountCurling.h"

ATresFriendLinkPawnMountCurling::ATresFriendLinkPawnMountCurling() {
    this->m_Param_FirstSpeed = 1200.00f;
    this->m_Param_DownStartTime = 2.00f;
    this->m_Param_DownSpeed = 80.00f;
    this->m_Param_EndSpeed = 250.00f;
    this->m_Param_RotSpeed = 0.80f;
    this->m_Param_RotuUiform = true;
    this->m_Param_WallHitSpeedRate = 0.85f;
    this->m_Param_WallHitRotLimit = 70.00f;
    this->m_Param_MeshFloorPitchLimit = 30.00f;
    this->m_Param_CamTargetOfsZ = 130.00f;
    this->m_Param_CamPitch = 0.00f;
    this->m_Param_CamDistance = 300.00f;
    this->m_Param_CamTurningPower = 5.00f;
    this->m_RunEff = NULL;
    this->m_RbdEff = NULL;
    this->m_KzkEff = NULL;
    this->m_LoopSEAsset = NULL;
    this->m_LandSEAsset = NULL;
    this->m_DashSEAsset = NULL;
    this->m_Param_DebugEventCutFlag = false;
    this->m_Camera = NULL;
    this->m_LoopSE = NULL;
    this->m_Param_PuddingFirstSpeed = 1000.00f;
    this->m_Param_PuddingMaxSpeed = 1600.00f;
    this->m_Param_PuddingAddSpeed = 200.00f;
    this->m_Param_PuddingAddRate = 0.50f;
}

