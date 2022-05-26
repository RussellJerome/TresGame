#include "SQEXSEADAnimNotifyState_ChangeAutoSeEnable.h"

USQEXSEADAnimNotifyState_ChangeAutoSeEnable::USQEXSEADAnimNotifyState_ChangeAutoSeEnable() {
    this->bEnableSetting = false;
    this->NotifyEndBehavior = ESQEXSEADChangeAutoSeEnableNotifyEndBehavior::RevertState;
    this->bEnableContinuousDisabling = false;
}

