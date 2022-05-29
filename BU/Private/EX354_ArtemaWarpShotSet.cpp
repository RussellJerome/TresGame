#include "EX354_ArtemaWarpShotSet.h"

FEX354_ArtemaWarpShotSet::FEX354_ArtemaWarpShotSet() {
    this->m_bSendEventOnEnd = false;
    this->m_bIgnoreTargetModify = false;
    this->m_Owner = NULL;
    this->m_Target = NULL;
}

