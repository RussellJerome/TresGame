#include "TresGimmickTsSwing.h"

class AActor;
class UPrimitiveComponent;
class ATresCharPawnBase;
class USceneComponent;

void ATresGimmickTsSwing::UpdateAction_Implementation(float Delta) {
}

void ATresGimmickTsSwing::SwingStartSetBase_Implementation(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName) {
}

void ATresGimmickTsSwing::SwingEndSetBase_Implementation(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName) {
}

void ATresGimmickTsSwing::LeaveAction(ATresCharPawnBase* pPawn) {
}

void ATresGimmickTsSwing::EntryAction(ATresCharPawnBase* pPawn, USceneComponent* pAttachedParent) {
}

void ATresGimmickTsSwing::EndAction_Implementation(bool Broken) {
}

void ATresGimmickTsSwing::BeginAction_Implementation() {
}

ATresGimmickTsSwing::ATresGimmickTsSwing() {
    this->ActionNum = 5;
    this->UseNum = 3;
    this->ActionSpeedRate = 1.00f;
    this->FadeCurve = NULL;
}

