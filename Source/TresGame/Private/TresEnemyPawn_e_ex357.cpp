#include "TresEnemyPawn_e_ex357.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;
class UObject;

void ATresEnemyPawn_e_ex357::SetDisableFieldLifeOver(bool bDisable) {
}

void ATresEnemyPawn_e_ex357::SetDisableFieldAttack(bool bDisable) {
}

void ATresEnemyPawn_e_ex357::SetDisableBitAttackUpdate(bool bDisable) {
}

void ATresEnemyPawn_e_ex357::SetDisableBitAttack(bool bDisable) {
}

void ATresEnemyPawn_e_ex357::OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresEnemyPawn_e_ex357::OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ATresEnemyPawn_e_ex357::IsStartedDamageReactionAfterIdle() const {
    return false;
}

bool ATresEnemyPawn_e_ex357::IsDeathSentence() const {
    return false;
}

int32 ATresEnemyPawn_e_ex357::GetSmallFieldNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex357::GetMediumFieldNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex357::GetLargeFieldNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex357::GetFieldNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex357::GetFieldManagerNum() const {
    return 0;
}

void ATresEnemyPawn_e_ex357::GetFieldLocationsSize(TArray<FVector>& OutList, TEnumAsByte<ETresEnemyFieldSize_e_ex357::Type> InSizeType) const {
}

void ATresEnemyPawn_e_ex357::GetFieldLocationsIgnoreNearestSize(TArray<FVector>& OutList, TEnumAsByte<ETresEnemyFieldSize_e_ex357::Type> InSizeType) const {
}

void ATresEnemyPawn_e_ex357::GetFieldLocationsIgnoreNearest(TArray<FVector>& OutList) const {
}

void ATresEnemyPawn_e_ex357::GetFieldLocations(TArray<FVector>& OutList) const {
}

float ATresEnemyPawn_e_ex357::GetElapsedTimeSinceLastBitGenerate() const {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ex357::GetBitNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex357::GetBitManagerNum() const {
    return 0;
}

void ATresEnemyPawn_e_ex357::GetBitLocationList(TArray<FVector>& OutList) const {
}

bool ATresEnemyPawn_e_ex357::GetAttackGuarded() {
    return false;
}

void ATresEnemyPawn_e_ex357::DebugSetPhantomBlitzQuickTurnaroundParamIndex(int32 Index) {
}

void ATresEnemyPawn_e_ex357::DebugSetNumWarpCut(int32 Num) {
}

void ATresEnemyPawn_e_ex357::DebugSetNumContinuityCut(int32 Num) {
}

void ATresEnemyPawn_e_ex357::DebugSetEnableForceDeathSentenceApplyDispelCommand(int32 Enable) {
}

void ATresEnemyPawn_e_ex357::DebugSetEnableFieldForceShortLife(int32 Enable) {
}

void ATresEnemyPawn_e_ex357::DebugSetEnableDrawPullCollision(int32 Enable) {
}

void ATresEnemyPawn_e_ex357::DebugSetEnableDrawFastMoveArcTargetLocation(int32 Enable) {
}

void ATresEnemyPawn_e_ex357::DebugSetDeathSentenceStartCount(int32 InCount) {
}

void ATresEnemyPawn_e_ex357::DebugSetDeathSentenceCountSpeed(float InSpeed) {
}

void ATresEnemyPawn_e_ex357::DebugEnableBloomShield(int32 Enable) {
}

void ATresEnemyPawn_e_ex357::DeathSentenceRemoteEventForLevelBP(UObject* WorldContextObject, TEnumAsByte<ETresDeathSentenceRemoteEventType_e_ex357> InRemoteType) {
}

ATresEnemyPawn_e_ex357::ATresEnemyPawn_e_ex357() {
    this->MyPullCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PullCollisionComponent0"));
    this->m_AuraParticleSystem = NULL;
    this->m_WeaponAuraParticleSystem = NULL;
    this->m_DeathSentenceCinematicCoefficient = 0.00f;
    this->m_DeathSentenceCinematicStartTransitionTime = 0.00f;
    this->m_DeathSentenceCoefficient = 0.50f;
    this->m_DeathSentenceStartTransitionTime = 1.00f;
    this->m_DeathSentenceEndTransitionTime = 1.00f;
    this->m_bEnableBitExistLockonLowPriority = true;
    this->m_BitEnvQuery = NULL;
    this->m_BitEnvQueryRunIntervalTime = 0.00f;
    this->m_FieldPenetrateCheckStartDelayTime = 0.00f;
    this->m_bIsFieldDieDestroy = false;
    this->m_FieldDieDestroyDelayTime = 0.00f;
    this->m_bIsFieldDieImmediate = true;
    this->m_BloomShieldParticleSystem = NULL;
    this->m_DeathSentenceCounterParticleSystem = NULL;
}

