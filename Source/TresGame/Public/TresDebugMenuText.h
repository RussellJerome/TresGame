#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuObject.h"
#include "TresDebugMenuText.generated.h"

class UFont;

UCLASS(NonTransient)
class UTresDebugMenuText : public UTresDebugMenuObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UFont* m_Font;
    
    UTresDebugMenuText();
};

