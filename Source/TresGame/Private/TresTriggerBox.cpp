#include "TresTriggerBox.h"
#include "Templates/SubclassOf.h"

class UShapeComponent;
class UNavArea;
class UTresStaticMeshComponent;

void ATresTriggerBox::SetAreaClass(UShapeComponent* Component, TSubclassOf<UNavArea> AreaClass) {
}

FString ATresTriggerBox::GetWorldMainFlagNameString() {
    return TEXT("");
}

UTresStaticMeshComponent* ATresTriggerBox::GetDebugStaticMeshComponent() {
    return NULL;
}

ATresTriggerBox::ATresTriggerBox() {
}

