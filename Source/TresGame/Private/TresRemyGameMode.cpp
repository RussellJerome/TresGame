#include "TresRemyGameMode.h"

class ATresRemyPawnBase;
class ATresRemyPawn;
class ATresRemyGameManager;
class UTresRemyData;

ATresRemyPawnBase* ATresRemyGameMode::GetRemyRatPawn() const {
    return NULL;
}

ATresRemyPawn* ATresRemyGameMode::GetPawn() const {
    return NULL;
}

ATresRemyGameManager* ATresRemyGameMode::GetGameManager() const {
    return NULL;
}

UTresRemyData* ATresRemyGameMode::GetData() const {
    return NULL;
}

ATresRemyGameMode::ATresRemyGameMode() {
    this->GameManagerRef = NULL;
    this->PawnRef = NULL;
    this->RemyRatPawnRef = NULL;
    this->DataRef = NULL;
    this->m_pGameManager = NULL;
    this->m_pPawn = NULL;
    this->m_pRemyRatPawn = NULL;
}

