#include "TresNavMapStatics.h"

class UObject;

void UTresNavMapStatics::SetHideNavMap(UObject* WorldContextObject, bool isHide) {
}

void UTresNavMapStatics::ReplaceNavMapKey(FName replaceName, FName NewName) {
}

bool UTresNavMapStatics::ApplyNavMapFromNavMapKey(FName navMapKey, float switchNavMapTime) {
    return false;
}

bool UTresNavMapStatics::ApplyNavMapFromAreaNameKey(FName dataTableKey, float switchNavMapTime) {
    return false;
}

UTresNavMapStatics::UTresNavMapStatics() {
}

