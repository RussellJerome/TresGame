#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackInstSlotAnimation.h"
#include "TresInterpTrackInstWeaponAnimation.generated.h"

class ATresWeaponBase;

UCLASS()
class TRESGAME_API UTresInterpTrackInstWeaponAnimation : public UTresInterpTrackInstSlotAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATresWeaponBase* Weapon;
    
    UTresInterpTrackInstWeaponAnimation();
};

