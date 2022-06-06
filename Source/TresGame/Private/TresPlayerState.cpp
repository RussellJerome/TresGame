#include "TresPlayerState.h"
#include "Net/UnrealNetwork.h"

class ATresPlayerState;
class UDamageType;

void ATresPlayerState::OnRep_TeamNo() {
}

void ATresPlayerState::InformAboutKill_Implementation(ATresPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, ATresPlayerState* KilledPlayerState) {
}

void ATresPlayerState::BroadcastDeath_Implementation(ATresPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, ATresPlayerState* KilledPlayerState) {
}

void ATresPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATresPlayerState, m_TeamNo);
}

ATresPlayerState::ATresPlayerState() {
    this->m_TeamNo = 0;
}

