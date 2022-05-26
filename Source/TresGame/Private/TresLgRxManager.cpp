#include "TresLgRxManager.h"

class USoundBase;
class ATresCharPawnBase;
class AActor;

void ATresLgRxManager::BP_SpawnLgRingEffect() {
}

void ATresLgRxManager::BP_SetFocusLgPawn(ETresChrUniqueID InChrUniqueID) {
}

void ATresLgRxManager::BP_SetFocusChangeEnd() {
}

void ATresLgRxManager::BP_SetEventEnd() {
}

void ATresLgRxManager::BP_SetAllVisible(bool InVisible) {
}

void ATresLgRxManager::BP_PrepareAppear() {
}

bool ATresLgRxManager::BP_PlayInterruptVoice(ETresChrUniqueID InChrUniqueID, USoundBase* InVoiceAsset, FName InLipAnimName) {
    return false;
}

bool ATresLgRxManager::BP_IsPlayInterruptVoice(ETresChrUniqueID InChrUniqueID) const {
    return false;
}

int32 ATresLgRxManager::BP_GetPhase() const {
    return 0;
}

ATresCharPawnBase* ATresLgRxManager::BP_GetLgPawn(ETresChrUniqueID InChrUniqueID) const {
    return NULL;
}

ETresChrUniqueID ATresLgRxManager::BP_GetFocusLgChrUniqueID() const {
    return ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
}

AActor* ATresLgRxManager::BP_GetCameraNote(ETresChrUniqueID InChrUniqueID) {
    return NULL;
}

bool ATresLgRxManager::BP_CanSpawnRushCamera() const {
    return false;
}

ATresLgRxManager::ATresLgRxManager() {
    this->m_AssetsCameraNormal = NULL;
    this->m_AssetsProjGuardCounter = NULL;
    this->m_AssetEffectGuardLoop = NULL;
    this->m_AssetEffectAttackRelfect = NULL;
    this->m_AssetEffectAttackSpark = NULL;
    this->m_AssetEffectLgHeavyEndOne = NULL;
    this->m_AssetEffectLgHeavyEndAll = NULL;
    this->m_AssetEffectLgRing = NULL;
    this->m_AssetEffectRushGuardHit = NULL;
    this->m_AssetEffectKeyHole = NULL;
    this->m_AssetEffectBgLens = NULL;
    this->m_AssetVoiceMickey1 = NULL;
    this->m_AssetVoiceMickey2 = NULL;
    this->m_Param_LgMaxHp = 2000;
    this->m_Param_GuardTime = 1.00f;
    this->m_Param_GuardStun = 0.50f;
    this->m_Param_CmdPointGuardCounterAll = 3.00f;
    this->m_Param_CmdPointGuardCounterOne = 0.25f;
    this->m_Param_RushStartActionTime = 0.50f;
    this->m_Param_FocusChrNum = 6;
    this->m_Param_GameClearGameSpeed = 0.02f;
    this->m_PlayerController = NULL;
    this->m_Camera = NULL;
    this->m_pGuardEffect = NULL;
    this->m_pRushGuardHitEffect = NULL;
    this->m_pLgRingEffect = NULL;
    this->m_pKeyHoleEffect = NULL;
    this->m_pBgLensEffect = NULL;
}

