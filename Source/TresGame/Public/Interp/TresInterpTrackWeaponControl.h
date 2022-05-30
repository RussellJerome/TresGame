#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresWeaponControlTrackKey.h"
#include "TresInterpTrackWeaponControl.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackWeaponControl : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresWeaponControlTrackKey> m_Keys;
    
    UTresInterpTrackWeaponControl();
};

