#pragma once
#include "CoreMinimal.h"
#include "TresUIP_Hologram_CharaInfoIcon.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

USTRUCT(BlueprintType)
struct FTresUIP_Hologram_CharaInfoIcon {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* m_IconRoot;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_IconImg;
    
    UPROPERTY(Transient)
    UGFxObject* m_NewMark;
    
    TRESGAME_API FTresUIP_Hologram_CharaInfoIcon();
};

