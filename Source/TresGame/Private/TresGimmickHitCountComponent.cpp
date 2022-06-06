#include "TresGimmickHitCountComponent.h"

class AController;
class AActor;

void UTresGimmickHitCountComponent::OnTresTakeDamageOwner(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser) {
}

void UTresGimmickHitCountComponent::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}






void UTresGimmickHitCountComponent::BP_SetMaxHitCount(int32 count, bool bReset) {
}

void UTresGimmickHitCountComponent::BP_SetHitCount(int32 count) {
}

void UTresGimmickHitCountComponent::BP_SetEnableHitCount(bool Enable) {
}

void UTresGimmickHitCountComponent::BP_SetDamageProfile(ETresGimmickHitCountComponentDamageProfile damageProfile) {
}

void UTresGimmickHitCountComponent::BP_SetDamage(int32 Damage) {
}

void UTresGimmickHitCountComponent::BP_Reset() {
}

bool UTresGimmickHitCountComponent::BP_IsDestroyed() const {
    return false;
}

bool UTresGimmickHitCountComponent::BP_IsDestroyDamage() const {
    return false;
}

int32 UTresGimmickHitCountComponent::BP_GetMaxHitCount() const {
    return 0;
}

FTresDamageInfo UTresGimmickHitCountComponent::BP_GetLastTresDamageInfo() const {
    return FTresDamageInfo{};
}

FHitResult UTresGimmickHitCountComponent::BP_GetLastHitResult() const {
    return FHitResult{};
}

float UTresGimmickHitCountComponent::BP_GetHitCountRate() const {
    return 0.0f;
}

int32 UTresGimmickHitCountComponent::BP_GetHitCount() const {
    return 0;
}

int32 UTresGimmickHitCountComponent::BP_GetDamage() const {
    return 0;
}

void UTresGimmickHitCountComponent::BP_ForceDestroy(AActor* DamageCauser) {
}

void UTresGimmickHitCountComponent::BP_ApplyDamage(AActor* DamageCauser) {
}

UTresGimmickHitCountComponent::UTresGimmickHitCountComponent() {
    this->m_bUseHitCount = true;
    this->m_DamageProfile = ETresGimmickHitCountComponentDamageProfile::NotUse;
    this->m_Type = ETresGimmickHitCountComponentType::HitCount;
    this->m_HitCount = 4;
    this->m_Damage = 1;
    this->m_bDestroyedStart = false;
    this->m_AccumulationReleaseTime = 10.00f;
    this->m_AccumulationRecoveryTime = 0.00f;
    this->m_bEnableDestroyByFinish = true;
    this->m_DestroyByFinishLength = 250.00f;
    this->m_bEnableDamageByFinish = false;
    this->m_bEnableTakeDamageInterval = true;
    this->m_TakeDamageInterval = 0.15f;
    this->m_bBindTakeDamage = true;
    this->m_bBindHit = false;
    this->m_bAutoReset = false;
    this->m_bAutoCallDestroy = true;
    this->m_bCheckKillAttack = false;
    this->m_ApplyDamageChrUniqueIDs.AddDefaulted(2);
    this->m_IgnoreDamageFriends = false;
    this->m_IgnoreDisneyMagic = false;
    this->m_IgnoreAttractionFlow = false;
    this->m_Effect_Damage = NULL;
    this->m_bEnableBlowDeath = false;
}

