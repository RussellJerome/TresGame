#include "TresGameMode.h"

class ATresAICoordinator;
class UObject;

ATresAICoordinator* ATresGameMode::GetAICoordinator() const {
    return NULL;
}

void ATresGameMode::DebugShowTresCollManagerInfo(bool bDispEnable) {
}

void ATresGameMode::DebugShowProjectileManagerInfo(bool bDispEnable) {
}

void ATresGameMode::DebugShowAtkCollManagerInfo(bool bDispEnable) {
}

void ATresGameMode::DebugEnableHitStop(bool bEnable) {
}

void ATresGameMode::BPE_OverrideMapJumpPath_Implementation(UObject* From, int32 InFadeKind, const FName& InMapName, const FName& InPlayerStartTag, FName& OutMapName, FName& OutPlayerStartTag) {
}

ATresGameMode::ATresGameMode() {
    this->m_pTresGameState = NULL;
    this->m_AtkCollManager = NULL;
    this->m_ProjectileManager = NULL;
    this->m_LoadAsset = NULL;
    this->m_AICoordinator = NULL;
    this->m_AutoSavePoint = NULL;
    this->m_IsShowMapName = false;
    this->m_IsWakeupShowMapName = false;
    this->m_StopShowMapNameSystem = false;
    this->m_pNavMapShowManager = NULL;
}

