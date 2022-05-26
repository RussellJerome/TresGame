#include "TresRemyCookingFlambeV2.h"

void ATresRemyCookingFlambeV2::PushState(TEnumAsByte<RemyCookingGameState> State) {
}

void ATresRemyCookingFlambeV2::PopState() {
}

float ATresRemyCookingFlambeV2::GetMaterialMaxAmount() const {
    return 0.0f;
}

float ATresRemyCookingFlambeV2::GetGameDuration() const {
    return 0.0f;
}

void ATresRemyCookingFlambeV2::ChangeState(TEnumAsByte<RemyCookingGameState> State) {
}

ATresRemyCookingFlambeV2::ATresRemyCookingFlambeV2() {
    this->PanPawnRef = NULL;
    this->BottlePawnRef = NULL;
    this->BrandyParticleAttachDataRef = NULL;
    this->FireParticleAttachDataRef = NULL;
    this->VaporParticleAttachDataRef = NULL;
    this->m_pPanPawn = NULL;
    this->m_pBottlePawn = NULL;
    this->m_pFoodPawn = NULL;
}

