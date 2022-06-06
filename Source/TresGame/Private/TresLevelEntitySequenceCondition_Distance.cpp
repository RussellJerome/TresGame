#include "TresLevelEntitySequenceCondition_Distance.h"

UTresLevelEntitySequenceCondition_Distance::UTresLevelEntitySequenceCondition_Distance() {
    this->m_Distance = 0.00f;
    this->m_Compare = ETresLevelEntitySequenceConditionDistanceCompare_GraeterEqual;
    this->m_Selector = ETresLevelEntitySequenceConditionDistanceSelector_Nearest;
}

