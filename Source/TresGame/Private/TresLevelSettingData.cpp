#include "TresLevelSettingData.h"

UTresLevelSettingData::UTresLevelSettingData() {
    this->AsyncLoadingTimeLimit = 5.00f;
    this->AsyncLoadingUseFullTimeLimit = 1;
    this->PriorityAsyncLoadingExtraTime = 20.00f;
    this->LevelStreamingActorsUpdateTimeLimit = 5.00f;
    this->LevelStreamingComponentsRegistrationGranularity = 10;
    this->LevelStreamingComponentsUnregistrationGranularity = 5;
    this->LevelStreamingUnregisterComponentsTimeLimit = 1.00f;
}

