#include "TresPlaceComponetSwitcher.h"
#include "Templates/SubclassOf.h"
#include "TresRootComponent.h"

class AActor;
class UActorComponent;
class UObject;

void ATresPlaceComponetSwitcher::AddManageComponent(UActorComponent* comp) {
}

void ATresPlaceComponetSwitcher::AddManageActorClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass) {
}

void ATresPlaceComponetSwitcher::AddManageActor(AActor* pActor) {
}

ATresPlaceComponetSwitcher::ATresPlaceComponetSwitcher() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->WorkDistance_ = 30000.00f;
    this->bRegisterSelf_ = false;
}

