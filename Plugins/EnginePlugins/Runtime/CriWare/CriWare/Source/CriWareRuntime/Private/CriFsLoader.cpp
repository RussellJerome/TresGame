#include "CriFsLoader.h"
#include "CriFsLoaderComponent.h"

ACriFsLoader::ACriFsLoader() {
    this->LoaderComponent = CreateDefaultSubobject<UCriFsLoaderComponent>(TEXT("CriFsLoaderComponent0"));
}

