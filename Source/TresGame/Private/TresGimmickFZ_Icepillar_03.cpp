#include "TresGimmickFZ_Icepillar_03.h"

class AActor;


void ATresGimmickFZ_Icepillar_03::BP_UnRegistAttacker(AActor* Actor) {
}

void ATresGimmickFZ_Icepillar_03::BP_RegistAttacker(AActor* Actor) {
}

bool ATresGimmickFZ_Icepillar_03::BP_IsRegistedAttacker() const {
    return false;
}

bool ATresGimmickFZ_Icepillar_03::BP_CheckRegistingAttacker(AActor* Actor) const {
    return false;
}

bool ATresGimmickFZ_Icepillar_03::BP_CheckAttackLocationRail(AActor* Attacker, FVector Location) {
    return false;
}

bool ATresGimmickFZ_Icepillar_03::BP_CheckAttackLocation(AActor* Attacker, FVector Location) {
    return false;
}

ATresGimmickFZ_Icepillar_03::ATresGimmickFZ_Icepillar_03() {
    this->m_AttackRadius = 100.00f;
    this->m_PersonalSpaceRadius = 300.00f;
}

