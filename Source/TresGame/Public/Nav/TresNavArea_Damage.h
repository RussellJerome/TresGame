#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavAreas/NavArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "TresNavArea_Damage.generated.h"

UCLASS()
class TRESGAME_API UTresNavArea_Damage : public UNavArea {
    GENERATED_BODY()
public:
    UTresNavArea_Damage();
};

