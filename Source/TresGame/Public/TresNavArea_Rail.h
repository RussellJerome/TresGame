#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavAreas/NavArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "TresNavArea_Rail.generated.h"

UCLASS()
class TRESGAME_API UTresNavArea_Rail : public UNavArea {
    GENERATED_BODY()
public:
    UTresNavArea_Rail();
};

