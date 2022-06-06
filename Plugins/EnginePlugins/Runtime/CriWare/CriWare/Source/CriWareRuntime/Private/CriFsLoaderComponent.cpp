#include "CriFsLoaderComponent.h"

void UCriFsLoaderComponent::Load() {
}

ECriFsLoaderStatus UCriFsLoaderComponent::GetStatus() {
    return ECriFsLoaderStatus::Stop;
}

TArray<uint8> UCriFsLoaderComponent::GetDataArray() {
    return TArray<uint8>();
}

UCriFsLoaderComponent::UCriFsLoaderComponent() {
}

