#include "TresGimmickPuddingEvent.h"
#include "TresReactorComponent.h"


ATresGimmickPuddingEvent::ATresGimmickPuddingEvent() {
    this->MyReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("MyReactor"));
}

