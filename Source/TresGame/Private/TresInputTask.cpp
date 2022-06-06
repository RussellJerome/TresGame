#include "TresInputTask.h"

bool UTresInputTask::IsRepeatGameKey(TEnumAsByte<ETresGameKey::Type> Key, bool enableRepeat) {
    return false;
}

bool UTresInputTask::IsRepeat(FKey Key, bool enableRepeat) {
    return false;
}

bool UTresInputTask::IsReleaseGameKey(TEnumAsByte<ETresGameKey::Type> Key) {
    return false;
}

bool UTresInputTask::IsRelease(FKey Key) {
    return false;
}

bool UTresInputTask::IsPressGameKey(TEnumAsByte<ETresGameKey::Type> Key) {
    return false;
}

bool UTresInputTask::IsPress(FKey Key) {
    return false;
}

bool UTresInputTask::IsInputNone() {
    return false;
}

UTresInputTask::UTresInputTask() {
}

