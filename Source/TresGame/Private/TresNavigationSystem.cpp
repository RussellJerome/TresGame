#include "TresNavigationSystem.h"

class UObject;

void UTresNavigationSystem::UnlockNavigationBuild(UObject* WorldContextObject) {
}

void UTresNavigationSystem::ResetShipboardNavmesh(UObject* WorldContextObject) {
}

void UTresNavigationSystem::LockNavigationBuild(UObject* WorldContextObject) {
}

bool UTresNavigationSystem::IsNavigationBuilding(UObject* WorldContextObject, bool bCheckDirtyToo) {
    return false;
}

void UTresNavigationSystem::BP_ApplyWorldOffset(UObject* WorldContextObject, const FVector& InOffset, bool bWorldShift) {
}

void UTresNavigationSystem::ApplyShipboardNavmeshWorldOffset(UObject* WorldContextObject, FVector Location, FRotator Rotation) {
}

UTresNavigationSystem::UTresNavigationSystem() {
}

