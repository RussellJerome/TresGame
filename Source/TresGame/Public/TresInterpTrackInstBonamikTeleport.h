#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstBonamikTeleport.generated.h"

class USQEX_KBD_Component;

UCLASS()
class TRESGAME_API UTresInterpTrackInstBonamikTeleport : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USQEX_KBD_Component* m_KBDComp;
    
    UPROPERTY()
    float m_BackupDistance;
    
    UPROPERTY()
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstBonamikTeleport();
};

