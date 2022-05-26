#include "TresEnemyPawn_e_ex301.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresEnemyPawn_e_ex301::OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresEnemyPawn_e_ex301::OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ATresEnemyPawn_e_ex301::IsSecondHalfBattle() {
    return false;
}

bool ATresEnemyPawn_e_ex301::IsFirstHalfBattle() {
    return false;
}

bool ATresEnemyPawn_e_ex301::IsAvatar() {
    return false;
}

bool ATresEnemyPawn_e_ex301::IsAscensionMode() {
    return false;
}

void ATresEnemyPawn_e_ex301::BP_XIIIAttackStart() {
}

void ATresEnemyPawn_e_ex301::BP_SecondBattleStart() {
}

void ATresEnemyPawn_e_ex301::BP_SecondBattleFinish() {
}

void ATresEnemyPawn_e_ex301::BP_DescensionStart() {
}

void ATresEnemyPawn_e_ex301::BP_ChangeGoatMagicCircle() {
}

void ATresEnemyPawn_e_ex301::BP_AscensionEnd() {
}

void ATresEnemyPawn_e_ex301::BP_AscensionAuraEnable() {
}

void ATresEnemyPawn_e_ex301::BP_AscensionAttackStart() {
}

void ATresEnemyPawn_e_ex301::BattleEndAscensionMode() {
}

ATresEnemyPawn_e_ex301::ATresEnemyPawn_e_ex301() {
    this->m_LightPower = 1.00f;
    this->m_AspirStartTime = 5.00f;
    this->m_AspirIntervalTime = 1.00f;
    this->m_AspirHP = 1.00f;
    this->m_Light = NULL;
    this->m_Avatar = NULL;
    this->m_PhaseOneEndHitPoint = 50;
    this->m_PhaseHitPoint = 100;
    this->m_SwordWaveProjectile = NULL;
    this->m_BattleEndLightPower = 0.00f;
    this->m_MagicCircleEffData = NULL;
    this->m_NormalMagicCircleEffData = NULL;
    this->m_WarpEffData = NULL;
    this->m_WarpOutEffData = NULL;
    this->m_WarpParticleEffData = NULL;
    this->m_SwordParticleEffData = NULL;
    this->m_RadialParticleData = NULL;
    this->m_AnotherWorldMagicCircleEffData = NULL;
    this->m_GoatMagicCircleEffData = NULL;
    this->m_ChangeWorldFlashData = NULL;
    this->m_BigPillarProjData = NULL;
    this->m_AscensionPlayerEffData = NULL;
    this->m_CenterNormalMagicCircleEffData = NULL;
    this->m_VacuumParticleEffData = NULL;
    this->m_KHrtMaxSizeTime = 10.00f;
    this->m_AscensionAttack = NULL;
    this->m_CallXIIIAttack = NULL;
    this->m_XIIIAttack = NULL;
    this->m_BattleeAreaRange = 3000.00f;
    this->m_VacuumLightParticleKeepTime = 5.00f;
    this->m_VacuumLightParticleEndTime = 2.00f;
    this->m_CenterPillarProjectile = NULL;
    this->m_CenterPillarAttackRange = 700.00f;
    this->m_CenterPillarAttackWaitTime = 3.00f;
    this->m_CenterPillarAttackIntervalTime = 1.00f;
    this->m_AscensionEndWaitTime = 4.00f;
    this->m_DangerParticleData = NULL;
    this->MyAspirComponent = CreateDefaultSubobject<USphereComponent>(TEXT("AutoAspirCollision"));
    this->m_AscensionLight = NULL;
    this->m_pAvaterPawn[0] = NULL;
    this->m_pAvaterPawn[1] = NULL;
    this->m_pAvaterPawn[2] = NULL;
    this->m_pAvaterPawn[3] = NULL;
    this->m_pAvaterPawn[4] = NULL;
    this->m_pAvaterPawn[5] = NULL;
    this->m_pAvaterPawn[6] = NULL;
    this->m_pAvaterPawn[7] = NULL;
    this->m_pAvaterPawn[8] = NULL;
    this->m_pAvaterPawn[9] = NULL;
    this->m_pAvaterPawn[10] = NULL;
    this->m_pAvaterPawn[11] = NULL;
    this->m_pAvaterPawn[12] = NULL;
    this->m_AttackedChar = NULL;
    this->m_PurgatoryDamageBox = NULL;
    this->m_MagicCircle = NULL;
    this->m_NormalMagicCircle = NULL;
    this->m_AscensionPlayerEff = NULL;
    this->m_HartEff = NULL;
    this->m_CenterNormalMagicCircle = NULL;
    this->m_AnotherWorld = NULL;
    this->Actor = NULL;
    this->m_BigPillarProj = NULL;
    this->m_RadialParticle = NULL;
    this->m_GoatMagicCircle = NULL;
    this->m_VacuumParticleEff = NULL;
    this->m_SwordParticleEff = NULL;
    this->m_AnotherWorldMagicCircle = NULL;
    this->m_CheckPillarProj = NULL;
    this->m_WarpOutEff = NULL;
    this->m_DangerParticle = NULL;
}

