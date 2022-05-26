#include "TresAttractionPawnShootingRide.h"
#include "TresSkeletalMeshComponent.h"

float ATresAttractionPawnShootingRide::GetRotPitch() const {
    return 0.0f;
}

FVector ATresAttractionPawnShootingRide::GetCameraAddLocation() const {
    return FVector{};
}

ATresAttractionPawnShootingRide::ATresAttractionPawnShootingRide() {
    this->m_EffDataAsset = NULL;
    this->m_ProjSora = NULL;
    this->m_ProjDona = NULL;
    this->m_ProjGoo = NULL;
    this->m_ProjFinish = NULL;
    this->m_FinishStartEff = NULL;
    this->m_FinishLensEffectClass = NULL;
    this->m_Param_FinishStartEffDis = 200.00f;
    this->m_Param_FinishStartEffTime = 0.50f;
    this->m_CameraShakeSmall = NULL;
    this->m_CameraShakeBig = NULL;
    this->m_SndAssetBoost = NULL;
    this->m_Param_RotSpeedYaw = 1.00f;
    this->m_Param_RotSpeedPitch = 0.50f;
    this->m_Param_RotPitchMax = 40.00f;
    this->m_Param_RotPitchMin = -20.00f;
    this->m_Param_AttackMoveRate = 0.70f;
    this->m_Param_BoostUseValue = 125.00f;
    this->m_Param_BoostRecoveryLag = 0.50f;
    this->m_Param_BoostRecoverySpeed = 100.00f;
    this->m_Param_BoostMaxZ = 1000.00f;
    this->m_Param_FriendShotTime = 0.70f;
    this->m_MuzzleMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresAttractionMuzzleMesh"));
    this->m_FinishLensEff = NULL;
    this->m_Camera = NULL;
    this->m_BoostSE = NULL;
}

