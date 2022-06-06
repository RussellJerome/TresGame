#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackSlotAnimation.h"
#include "ETresCharEquipPart.h"
#include "TresInterpTrackWeaponAnimation.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackWeaponAnimation : public UTresInterpTrackSlotAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresCharEquipPart Part;
    
    UTresInterpTrackWeaponAnimation();
};

