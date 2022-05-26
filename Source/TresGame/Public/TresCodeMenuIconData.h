#pragma once
#include "CoreMinimal.h"
#include "TresCodeMenuIconData.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

USTRUCT(BlueprintType)
struct FTresCodeMenuIconData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* m_pIconAnm;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pIcon;
    
    TRESGAME_API FTresCodeMenuIconData();
};

