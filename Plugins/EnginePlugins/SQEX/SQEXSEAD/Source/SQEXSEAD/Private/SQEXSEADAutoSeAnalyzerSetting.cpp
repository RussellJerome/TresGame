#include "SQEXSEADAutoSeAnalyzerSetting.h"

FSQEXSEADAutoSeAnalyzerSetting::FSQEXSEADAutoSeAnalyzerSetting() {
    this->bOverrideAssumeFootMotionlessMoveLenInWorld = false;
    this->AssumeFootMotionlessMoveLenInWorld = 0.00f;
    this->bOverrideAssumeBodyRunngingVelocity = false;
    this->AssumeBodyRunngingVelocity = 0.00f;
    this->bOverrideAutoCalcFootGroundedThresholdRatio = false;
    this->AutoCalcFootGroundedThresholdRatio = 0.00f;
}

