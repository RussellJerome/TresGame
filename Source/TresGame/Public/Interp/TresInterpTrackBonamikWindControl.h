#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackBonamikWindControlKey.h"
#include "TresInterpTrackBonamikWindControl.generated.h"

class ASQEX_BonamikWind_Actor;

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackBonamikWindControl : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackBonamikWindControlKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    ASQEX_BonamikWind_Actor* m_BonamikWindActor;
    
    UTresInterpTrackBonamikWindControl();
};

