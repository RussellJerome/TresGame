#include "TresBTDecorator_RangeCheck.h"

UTresBTDecorator_RangeCheck::UTresBTDecorator_RangeCheck() {
    this->UseDistanceFromSourceBounds = false;
    this->RangeMode = ETresRangeCheckMode::DirectDistance2D;
    this->UseDistanceToTargetBounds = false;
    this->m_RangeValueSetting = ETresRangeCheckValueSetting::Range;
    this->m_MinRangeValueType = ETresRangeCheckValueSource::LiteralValue;
    this->m_MaxRangeValueType = ETresRangeCheckValueSource::LiteralValue;
    this->m_bUseMinRange = true;
    this->m_bUseMaxRange = true;
    this->m_bUseBlackboardMinRange = false;
    this->m_bUseBlackboardMaxRange = false;
    this->m_bUseLiteralMinRange = true;
    this->m_bUseLiteralMaxRange = true;
    this->MinRange = 0.00f;
    this->MaxRange = 0.00f;
    this->m_bUseOverrideKey = false;
}

