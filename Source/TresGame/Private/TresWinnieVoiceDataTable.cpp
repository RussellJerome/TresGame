#include "TresWinnieVoiceDataTable.h"

FTresWinnieVoiceDataTable::FTresWinnieVoiceDataTable() {
    this->VoiceType = WinniePuzzleVoice::PlayerGameStart;
    this->Priority = WinniePuzzleVoicePriority::Low;
    this->EnablePlayCounter = false;
    this->PlayCounterRandomValueMin = 0;
    this->PlayCounterRandomValueMax = 0;
}

