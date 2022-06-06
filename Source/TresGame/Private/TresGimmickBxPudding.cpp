#include "TresGimmickBxPudding.h"
#include "Components/SphereComponent.h"
#include "TresDebugArrowComponent.h"
#include "TresAtkCollComponent.h"
#include "Particles/ParticleSystemComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGimmickBxPudding::SetMoveSpeed(const float Speed) {
}

void ATresGimmickBxPudding::SetMoveLoop(const bool bLoop) {
}

void ATresGimmickBxPudding::SetLaunchHeight(const float Height) {
}

void ATresGimmickBxPudding::SetEnableMove(const bool bEnable, const bool bLoop, const float Speed) {
}

void ATresGimmickBxPudding::OnEntryEndOverlap(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ATresGimmickBxPudding::OnEntryBeginOverlap(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATresGimmickBxPudding::NextBxPuddingType() {
}

bool ATresGimmickBxPudding::IsNormalBxPudding() const {
    return false;
}

bool ATresGimmickBxPudding::IsCannibalBxPudding() const {
    return false;
}

bool ATresGimmickBxPudding::IsAreaJumpBxPudding() const {
    return false;
}

float ATresGimmickBxPudding::GetMoveSpeed() const {
    return 0.0f;
}

float ATresGimmickBxPudding::GetLaunchHeight() const {
    return 0.0f;
}

int32 ATresGimmickBxPudding::GetActiveScore() const {
    return 0;
}



bool ATresGimmickBxPudding::ChangeBxPuddingType(const ETresBxPuddingType Type) {
    return false;
}

ATresGimmickBxPudding::ATresGimmickBxPudding() {
    this->m_pEatAttackColl = CreateDefaultSubobject<UTresAtkCollComponent>(TEXT("TresAtkCollComponent"));
    this->m_pEntryTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("EntryTrigger"));
    this->m_pAreaJumpEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AreaJumpEffectComp"));
    this->m_AtkCollOnLen = 1000.00f;
    this->m_AreaJumpAngle = 60.00f;
    this->m_AreaJumpTime = 1.00f;
    this->m_DisableChangeFlags = 0;
    this->m_FirstPuddingType = ETresBxPuddingType::NORMAL;
    this->m_Score = 10;
    this->m_AreaJumpScore = 20;
    this->m_CannibalTimeMax = 10.00f;
    this->m_CannibalTimer = 0.00f;
    this->m_LandAnimDelayTimeForAreaJump = 0.00f;
    this->m_BxPuddingType = ETresBxPuddingType::NONE;
    this->m_bMove = false;
    this->m_bAttackCollision = false;
    this->m_bNotifyStop = false;
    this->m_pDebugArrowComponent = CreateDefaultSubobject<UTresDebugArrowComponent>(TEXT("DebugArrow"));
}

