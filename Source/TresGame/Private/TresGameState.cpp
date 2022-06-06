#include "TresGameState.h"

class ATresVFXManager;
class ATresSceneManager;
class ASQEX_VFXManager;

ATresVFXManager* ATresGameState::GetVFXManager() {
    return NULL;
}

ASQEX_VFXManager* ATresGameState::GetSQEX_VFXManager() {
    return NULL;
}

ATresSceneManager* ATresGameState::GetSceneManager() {
    return NULL;
}

ATresGameState::ATresGameState() {
    this->m_SceneManager = NULL;
    this->m_VFXManager = NULL;
    this->m_EmitterPool = NULL;
    this->m_PhysMatEffects = NULL;
    this->m_PrizeMan = NULL;
    this->m_CollisionManager = NULL;
    this->m_PhysObjMan = NULL;
}

