#include "TresRemyGameManager.h"

class ATresRemyPlayerController;
class AStaticMeshActor;
class UParticleSystemComponent;
class ATresRemyPawnBase;
class AActor;
class ATresEventPawnBase;
class ATresRemyPawn;
class ATresRemyHUD;
class UTresRemyData;
class ATresRemyCookingBase;

void ATresRemyGameManager::ShowGetMilestoneRewardUIMsg() {
}

void ATresRemyGameManager::SetSelectedRecipeKey(FName Key) {
}

void ATresRemyGameManager::SetBlackBox(AStaticMeshActor* blackBoxActor) {
}

void ATresRemyGameManager::RegisterStoveFireParicle(int32 KitchenGrade, UParticleSystemComponent* pParticle) {
}

void ATresRemyGameManager::RegisterHiddenActorInGame(AActor* Actor) {
}

void ATresRemyGameManager::RegisterEventPawn(ATresEventPawnBase* pEventPawn) {
}

void ATresRemyGameManager::PushState(TEnumAsByte<RemyGameState> State) {
}

void ATresRemyGameManager::ProcessWhenSkipMatinee() {
}

void ATresRemyGameManager::PopState() {
}

FName ATresRemyGameManager::GetSelectedRecipeKey() const {
    return NAME_None;
}

RemyCookingGameType ATresRemyGameManager::GetSelectedGameType() const {
    return RemyCookingGameType::Flambe;
}

ATresRemyPawnBase* ATresRemyGameManager::GetRemyRatPawn() const {
    return NULL;
}

ATresRemyPawn* ATresRemyGameManager::GetPawn() const {
    return NULL;
}

ATresRemyHUD* ATresRemyGameManager::GetHUD() const {
    return NULL;
}

UTresRemyData* ATresRemyGameManager::GetData() const {
    return NULL;
}

TEnumAsByte<RemyGameState> ATresRemyGameManager::GetCurrentState() const {
    return RemyPrepare;
}

ATresRemyCookingBase* ATresRemyGameManager::GetCurrentCooking() const {
    return NULL;
}

ATresRemyPlayerController* ATresRemyGameManager::GetController() const {
    return NULL;
}

void ATresRemyGameManager::ChangeState(TEnumAsByte<RemyGameState> State) {
}

ATresRemyGameManager::ATresRemyGameManager() {
    this->GameStartWaitFrames = 0;
    this->HourglassPawnRef = NULL;
    this->HourglassSandParticleAttachDataRef = NULL;
    this->HourglassSandParticleCurveFloatRef = NULL;
    this->HourglassSandParticleCurveVectorARef = NULL;
    this->HourglassSandParticleCurveVectorBRef = NULL;
    this->MenuRemyActorRef = NULL;
    this->BlackBoxOpacityMax = 0.00f;
    this->BlackBoxDisappearanceSpeedRef = 0.00f;
    this->CookAmountMax = 0;
    this->ScroogeEventPawn = NULL;
    this->BGMFadeOutTime = 0.00f;
    this->IsDebugSkip = false;
    this->m_cookingTimes = 0;
    this->m_pCurrentCooking = NULL;
    this->m_pScroogeEventPawn = NULL;
    this->m_pMenuRemyActor = NULL;
}

