#include "TresRemyCookingCutting.h"

void ATresRemyCookingCutting::PushState(TEnumAsByte<RemyCookingGameState> State) {
}

void ATresRemyCookingCutting::PopState() {
}

float ATresRemyCookingCutting::GetReloadTimeSpending() const {
    return 0.0f;
}

int32 ATresRemyCookingCutting::GetReloadTimes() const {
    return 0;
}

float ATresRemyCookingCutting::GetReloadJudgeTimer() const {
    return 0.0f;
}

int32 ATresRemyCookingCutting::GetReloadCounter() const {
    return 0;
}

TArray<RemyCookingCommand> ATresRemyCookingCutting::GetPlayerCommand() const {
    return TArray<RemyCookingCommand>();
}

float ATresRemyCookingCutting::GetMaterialMaxAmount() const {
    return 0.0f;
}

CuttingMainState ATresRemyCookingCutting::GetMainCurrentState() const {
    return CuttingMainState::None;
}

float ATresRemyCookingCutting::GetGameDuration() const {
    return 0.0f;
}

TArray<int32> ATresRemyCookingCutting::GetFoodSliceNumList() const {
    return TArray<int32>();
}

int32 ATresRemyCookingCutting::GetCurrentSliceNum() const {
    return 0;
}

void ATresRemyCookingCutting::ChangeState(TEnumAsByte<RemyCookingGameState> State) {
}

ATresRemyCookingCutting::ATresRemyCookingCutting() {
    this->ReloadSuccessParticleRef = NULL;
    this->KnifePawnRef = NULL;
    this->BowlStaticMeshActorRef = NULL;
    this->LowFrameratePadBias = 1.30f;
    this->LowFramerateMouseBias = 1.00f;
    this->FoodClusterParticleSpawningStartTimeRef = 0.00f;
    this->FoodClusterParticleSpawningEndTimeRef = 0.00f;
    this->ReloadAnimSpeedNormalRef = 0.00f;
    this->ReloadAnimSpeedExcellentRef = 0.00f;
    this->ReloadExcellentEvalutionTimeRef = 0.00f;
    this->ReloadType = CuttingReloadType::Command;
    this->m_pKnifePawn = NULL;
    this->m_pFoodPawn = NULL;
    this->m_pPrevFoodPawn = NULL;
    this->m_pFoodMassActor = NULL;
    this->m_pBowlActor = NULL;
}

