#include "SQEX_KineDriverTargetBendRoll.h"

FSQEX_KineDriverTargetBendRoll::FSQEX_KineDriverTargetBendRoll() {
    this->TargetObject = 0;
    this->SourceQuat = 0;
    this->QuatWeight = 0.00f;
    this->AsQuatAngle = false;
    this->Roll = 0.00f;
    this->BaseSpace = 0;
    this->SegmentScaleCompensate = false;
}

