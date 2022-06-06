#include "DirectInputSettings.h"

UDirectInputSettings::UDirectInputSettings() {
    this->DeviceConfigurations.AddDefaulted(2);
    this->InitialButtonRepeatDelay = 0.20f;
    this->ButtonRepeatDelay = 0.10f;
    this->DeviceCalibrations.AddDefaulted(1);
}

