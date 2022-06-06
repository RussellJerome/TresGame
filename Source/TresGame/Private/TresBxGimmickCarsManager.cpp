#include "TresBxGimmickCarsManager.h"
#include "Components/SceneComponent.h"

class AActor;
class ATresCharPawnBase;

void ATresBxGimmickCarsManager::SetStopCars(bool bStop) {
}

void ATresBxGimmickCarsManager::SetIgnorePause(bool bIgnore) {
}

void ATresBxGimmickCarsManager::RemoveObstacleObject(AActor* pActor) {
}

void ATresBxGimmickCarsManager::RegistObstacleObject(AActor* pActor, bool bMovable, float fBoundsRadius) {
}

void ATresBxGimmickCarsManager::OnMovePawnDelete(ATresCharPawnBase* InTargetPawn) {
}

void ATresBxGimmickCarsManager::OnMovePawnCreate(ATresCharPawnBase* InTargetPawn) {
}

void ATresBxGimmickCarsManager::NotifyChangeGimmickPause(bool bPause) {
}

ATresBxGimmickCarsManager::ATresBxGimmickCarsManager() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MgrRootComponent"));
    this->CarLODIndex = 2;
}

