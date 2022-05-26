#include "SQEX_BonamikWind_Actor.h"
#include "SQEX_BonamikWind_Component.h"

void ASQEX_BonamikWind_Actor::SetWindScale(float Value) {
}

float ASQEX_BonamikWind_Actor::GetWindScale() const {
    return 0.0f;
}

void ASQEX_BonamikWind_Actor::Enable(bool Value) {
}

ASQEX_BonamikWind_Actor::ASQEX_BonamikWind_Actor() {
    this->m_BonamikWind_Component = CreateDefaultSubobject<USQEX_BonamikWind_Component>(TEXT("SQEX_BonamikWind_Component"));
}

