#include "SQEXSEADWhizSound.h"
#include "SQEXSEADWhizSeComponent.h"

ASQEXSEADWhizSound::ASQEXSEADWhizSound() {
    this->WhizComponent = CreateDefaultSubobject<USQEXSEADWhizSeComponent>(TEXT("WhizSeComponent0"));
}

