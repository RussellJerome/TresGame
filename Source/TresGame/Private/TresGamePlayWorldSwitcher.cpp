#include "TresGamePlayWorldSwitcher.h"

FTresGamePlayWorldSwitcher::FTresGamePlayWorldSwitcher() {
    this->m_GameInstance = NULL;
    this->m_Invoker = ESQEX_Invoker::Native;
    this->m_FromMenu = false;
    this->m_Paused = false;
    this->m_BattleLevel = 0;
    this->m_GameMode = NULL;
    this->m_PlayerController = NULL;
    this->m_PlayerPawn = NULL;
    this->m_ViewTarget = NULL;
    this->m_PlayerStartForTeleport = NULL;
    this->m_pKHSBackup = NULL;
}

