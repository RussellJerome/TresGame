#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstBonamikCharaWind.generated.h"

class USQEX_KBD_Component;

UCLASS()
class TRESGAME_API UTresInterpTrackInstBonamikCharaWind : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USQEX_KBD_Component* m_KBDComp;
    
    UPROPERTY()
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstBonamikCharaWind();
};

