#include "TresNpcPawn_n_ex033.h"

class AController;
class AActor;

void ATresNpcPawn_n_ex033::OnDamageForRoxas(float InDamageAmount, const FDamageEvent& InDamageEvent, AController* InEventInstigator, AActor* InDamageCauser) {
}

ATresNpcPawn_n_ex033::ATresNpcPawn_n_ex033() {
    this->m_Param_FriendPointAdd = 8.00f;
    this->m_Param_FriendPointMul = 3.00f;
    this->m_AppendCure = 160;
    this->m_AttackTime = 10.00f;
}

