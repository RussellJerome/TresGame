#include "TresSoKcKeyHoleGenerator.h"
#include "Components/SceneComponent.h"

ATresSoKcKeyHoleGenerator::ATresSoKcKeyHoleGenerator() {
    this->GeneratorRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("KeyHoleGeneratorRoot"));
}

