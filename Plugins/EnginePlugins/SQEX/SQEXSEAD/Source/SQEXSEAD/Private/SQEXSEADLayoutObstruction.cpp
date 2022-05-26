#include "SQEXSEADLayoutObstruction.h"
#include "SQEXSEADLayoutObstructionComponent.h"

ASQEXSEADLayoutObstruction::ASQEXSEADLayoutObstruction() {
    this->ObstructionComponent = CreateDefaultSubobject<USQEXSEADLayoutObstructionComponent>(TEXT("ObstructionComponent0"));
}

