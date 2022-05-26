#include "TresBTDecorator_EntryLimit.h"

UTresBTDecorator_EntryLimit::UTresBTDecorator_EntryLimit() {
    this->m_MaxEntries = 1;
    this->m_IncrementOnlyOnSuccess = false;
    this->m_bInitSubtree = false;
}

