#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstWindScaleOfAllBonamikWindActors.generated.h"

class USQEX_BonamikWind_Component;

UCLASS()
class TRESGAME_API UTresInterpTrackInstWindScaleOfAllBonamikWindActors : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<USQEX_BonamikWind_Component*> m_WindComponents;
    
    UPROPERTY()
    TArray<float> m_OriginalValues;
    
    UTresInterpTrackInstWindScaleOfAllBonamikWindActors();
};

