#include "TresPlaceChildBonusPrizeGenerator.h"

class ATresPlacePrizeBase;
class AActor;

AActor* ATresPlaceChildBonusPrizeGenerator::SpawnActorRandSnapPos(const FTresSnapData& Data, ATresPlacePrizeBase* bonusPlz) {
    return NULL;
}

bool ATresPlaceChildBonusPrizeGenerator::GetRandSnapPos(const FTresSnapData& Data, FVector& outPos) {
    return false;
}

ATresPlaceChildBonusPrizeGenerator::ATresPlaceChildBonusPrizeGenerator() {
    this->RandomGenerateNum_ = 10;
    this->GenerateRadius = 100.00f;
    this->GenerateOffsetZ = 50.00f;
    this->GeneratorChildClass = NULL;
}

