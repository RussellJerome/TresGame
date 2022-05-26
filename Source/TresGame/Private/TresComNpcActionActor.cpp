#include "TresComNpcActionActor.h"
#include "TresComNpcActionComponent.h"

ATresComNpcActionActor::ATresComNpcActionActor() {
    this->MyComNpcAction = CreateDefaultSubobject<UTresComNpcActionComponent>(TEXT("ComNpcActionComponent0"));
}

