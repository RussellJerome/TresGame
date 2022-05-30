#include "TresAttack_e_ex773_ReverseFlare.h"

UTresAttack_e_ex773_ReverseFlare::UTresAttack_e_ex773_ReverseFlare() {
    this->m_FlareEQSQuery = NULL;
    this->Direction = ETres_e_ex773_Direction::Front;
    this->DirLength = 500.00f;
    this->bZDirHoming = true;
    this->FlareSpawnPosRate = 0.00f;
    this->SpawnOffsetZ = 80.00f;
    this->WallHitHoseiRange = 100.00f;
    this->MoveAxisType = ETresAttack_e_ex773_ReverseFlareMoveAxisType::Camera;
}

