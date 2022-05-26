#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuObject.h"
#include "TresDebugMenuImage.generated.h"

class UTexture2D;

UCLASS(NonTransient)
class UTresDebugMenuImage : public UTresDebugMenuObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTexture2D* m_Texture;
    
    UTresDebugMenuImage();
};

