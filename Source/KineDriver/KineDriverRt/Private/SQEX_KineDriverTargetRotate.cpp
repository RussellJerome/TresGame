#include "SQEX_KineDriverTargetRotate.h"

FSQEX_KineDriverTargetRotate::FSQEX_KineDriverTargetRotate() {
    this->TargetObject = 0;
    this->SourceQuat = 0;
    this->QuatWeight = 0.00f;
    this->AsQuatAngle = false;
    this->BaseSpace = 0;
    this->SegmentScaleCompensate = false;
}

