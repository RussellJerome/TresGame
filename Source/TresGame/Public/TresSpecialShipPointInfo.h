#pragma once
#include "CoreMinimal.h"
#include "TresSpecialShipPointInfo.generated.h"

class UTresASProxyTresControlsButton;
class UGFxObject;

USTRUCT(BlueprintType)
struct FTresSpecialShipPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pGFxMarker;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxSave;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxVisited;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNext;
    
    TRESGAME_API FTresSpecialShipPointInfo();
};

