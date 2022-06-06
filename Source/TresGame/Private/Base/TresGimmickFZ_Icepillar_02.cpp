#include "TresGimmickFZ_Icepillar_02.h"

class AActor;


void ATresGimmickFZ_Icepillar_02::BP_UnRegistAttacker(AActor* Actor) {
}

void ATresGimmickFZ_Icepillar_02::BP_RegistAttacker(AActor* Actor) {
}

bool ATresGimmickFZ_Icepillar_02::BP_IsRegistedAttacker() const {
    return false;
}

bool ATresGimmickFZ_Icepillar_02::BP_CheckRegistingAttacker(AActor* Actor) const {
    return false;
}

bool ATresGimmickFZ_Icepillar_02::BP_CheckAttackLocationRail(AActor* Attacker, FVector Location) {
    return false;
}

bool ATresGimmickFZ_Icepillar_02::BP_CheckAttackLocation(AActor* Attacker, FVector Location) {
    return false;
}

ATresGimmickFZ_Icepillar_02::ATresGimmickFZ_Icepillar_02() {
    this->m_IsCinematicMode = false;
    this->m_AttackRadius = 100.00f;
    this->m_PersonalSpaceRadius = 300.00f;
    this->m_IsSearching = false;
}

