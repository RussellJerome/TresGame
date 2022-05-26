#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstBonamikWorldWind.generated.h"

class USQEX_KBD_Component;
class USQEX_BonamikWind;

UCLASS()
class TRESGAME_API UTresInterpTrackInstBonamikWorldWind : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USQEX_KBD_Component* m_KBDComp;
    
    UPROPERTY()
    USQEX_BonamikWind* m_pBonamikWind;
    
    UPROPERTY()
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstBonamikWorldWind();
};

