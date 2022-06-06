#include "TresInterpGroupInstUpdateSettings.h"

FTresInterpGroupInstUpdateSettings::FTresInterpGroupInstUpdateSettings() {
    this->m_SkeletalMeshComponent = NULL;
    this->m_UpdateFlag = EMeshComponentUpdateFlag::AlwaysTickPoseAndRefreshBones;
    this->m_UpdateRateOptimizations = false;
}

