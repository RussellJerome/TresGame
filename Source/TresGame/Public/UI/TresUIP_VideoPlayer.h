#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_VideoPlayer.generated.h"

class UGFxObject;
class UManaTexture;
class UTextureRenderTarget2D;
class UTresVideoTexture;

UCLASS()
class UTresUIP_VideoPlayer : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTextureRenderTarget2D* m_FullScreenRenderTarget;
    
    UPROPERTY(Transient)
    UManaTexture* m_Texture;
    
    UPROPERTY(Transient)
    UTresVideoTexture* m_VideoTexture;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjVideo;
    
public:
    UTresUIP_VideoPlayer();
};

