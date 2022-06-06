#include "TresPlaceStatics.h"

class AActor;
class UObject;

void UTresPlaceStatics::SnapGround(AActor* Actor, const FTresSnapData& Data) {
}

bool UTresPlaceStatics::CalcSnapGroundLocation(UObject* WorldContextObject, FVector Location, const FTresSnapData& Data, FVector& retLocation) {
    return false;
}

UTresPlaceStatics::UTresPlaceStatics() {
}

