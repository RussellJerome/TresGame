#include "TresSavePointActor.h"
#include "TresMapMarkerComponent.h"
#include "TresSavePointRecoverComponent.h"
#include "TresReactorComponent.h"


void ATresSavePointActor::OnChangeSavePointDispType(ETresSavePointDispType InDispType) {
}

void ATresSavePointActor::OnChangePlayerArtsMode(bool bIsArtsMode) {
}

void ATresSavePointActor::OnChangeCinematicMode(bool bIsCinematicMode) {
}

void ATresSavePointActor::OnChangeBattleMode(bool bIsBattleMode) {
}

void ATresSavePointActor::BP_SetDisableMode(bool bIsDisable) {
}

bool ATresSavePointActor::BP_IsGimmickActive() const {
    return false;
}

void ATresSavePointActor::BP_DeactivateGimmickComponentAll() {
}

void ATresSavePointActor::BP_DeactivateGimmick() {
}

void ATresSavePointActor::BP_ActivateGimmickComponentAll() {
}

void ATresSavePointActor::BP_ActivateGimmick() {
}

ATresSavePointActor::ATresSavePointActor() {
    this->MyReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresReactor0"));
    this->MyRecover = CreateDefaultSubobject<UTresSavePointRecoverComponent>(TEXT("TresRecover0"));
    this->MyMapMarker = CreateDefaultSubobject<UTresMapMarkerComponent>(TEXT("TresMapMarker0"));
    this->m_bAutoActivate = true;
    this->m_bGimmickComponentAutoLinkActivate = true;
    this->m_bIsActive = true;
    this->m_bIsAccessed = false;
    this->m_bLimitedSavePoint = false;
    this->m_BaseEffect = NULL;
    this->m_LimitBaseEffect = NULL;
    this->m_BodyEffect = NULL;
    this->m_LimitBodyEffect = NULL;
    this->m_HealEffect = NULL;
    this->m_ClipOutDistance = 0.00f;
    this->m_pBaseEffect = NULL;
    this->m_pBodyEffect = NULL;
    this->m_pHealEffect = NULL;
    this->m_pCheckPawn = NULL;
}

