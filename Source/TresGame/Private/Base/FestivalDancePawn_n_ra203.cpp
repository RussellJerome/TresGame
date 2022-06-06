#include "FestivalDancePawn_n_ra203.h"

AFestivalDancePawn_n_ra203::AFestivalDancePawn_n_ra203() {
    this->WalkSpeed = 0.00f;
    this->RotateSpeed = 0.00f;
    this->DefaultSplineMoveMode = ETresRaDanceAreaType::RA_DANCE_NONE;
    this->SafeDistanceFromWall = 0.00f;
    this->m_pDanceMng = NULL;
    this->m_pPC = NULL;
}

