#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramDebugMenu.generated.h"

class UTresUIP_MobileAlbum;

USTRUCT(BlueprintType)
struct FTresPhotoHologramDebugMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIP_MobileAlbum* m_pAlbum;
    
public:
    TRESGAME_API FTresPhotoHologramDebugMenu();
};

