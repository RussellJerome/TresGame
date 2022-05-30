#include "TresEnemyPawn_e_bx903.h"
#include "Particles/ParticleSystemComponent.h"
#include "TresLockonTargetComponent.h"

bool ATresEnemyPawn_e_bx903::IsBattleAreaOutSide() {
    return false;
}

float ATresEnemyPawn_e_bx903::GetRushMotionBlendRate(FName AnimName) const {
    return 0.0f;
}

float ATresEnemyPawn_e_bx903::GetFriendLinkBodyCollSize() {
    return 0.0f;
}

ATresEnemyPawn_e_bx903::ATresEnemyPawn_e_bx903() {
    this->m_VoxelMeshParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("e_bx903_VoxelMeshParticle"));
    this->m_MyLockonComponent = CreateDefaultSubobject<UTresLockonTargetComponent>(TEXT("e_bx903_LockonComponent"));
    this->m_PunchCoreBodyColl = NULL;
    this->m_ShineAllTime = 1.00f;
    this->m_ShineRelayTime = 0.10f;
    this->m_ShineOrderTime = 0.20f;
    this->m_ShineOrderRadius = 150.00f;
    this->m_ShineOffOrderRadius = 150.00f;
    this->m_ShineOffPunchFadeTime = 6.00f;
    this->m_ShineOffArmSpinFadeTime = 5.00f;
    this->m_CoreEnterParticleAsset = NULL;
    this->m_CoreEndParticleAsset = NULL;
    this->m_CoreParticleAsset = NULL;
    this->m_CubeBodyNum = 18;
    this->m_RushEndShineNum = 21;
    this->m_DamageReactionSpeed = 8.00f;
    this->m_DamageReturnReactionSpeed = 7.00f;
    this->m_BattleEndTime = 60.00f;
    this->m_ChangeCameraDistance = 0.00f;
    this->m_CameraDistance = 0.00f;
    this->m_InterTime = 0.00f;
    this->m_BattleAreaOutSideDistance = 2000.00f;
    this->m_FLPunchCoreBodyCollSize = 100.00f;
    this->m_FLNormalCoreBodyCollSize = 600.00f;
    this->m_CoreDisplayParticleComp = NULL;
}

