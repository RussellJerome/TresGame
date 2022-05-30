#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstBonamikControl.generated.h"

class USQEX_KBD_Component;

UCLASS()
class TRESGAME_API UTresInterpTrackInstBonamikControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USQEX_KBD_Component* m_KBDComp;
    
    UPROPERTY()
    bool m_BackupAutoDisable;
    
    UPROPERTY()
    float m_BackupWeight;
    
    UPROPERTY()
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstBonamikControl();
};

