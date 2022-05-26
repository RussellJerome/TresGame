#include "TresMapSetVolume.h"

class UTresMapSet;

void ATresMapSetVolume::ChangeMapSetAndCommandName(UTresMapSet* newMapSet, FName newCommandName) {
}

void ATresMapSetVolume::ChangeMapSet(UTresMapSet* newMapSet) {
}

void ATresMapSetVolume::ChangeCommandName(FName newCommandName) {
}

ATresMapSetVolume::ATresMapSetVolume() {
    this->MapSet = NULL;
    this->bUseOverlapManager = false;
}

