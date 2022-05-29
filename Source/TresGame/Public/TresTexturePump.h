#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEXMatineeActorAsset -FallbackName=SQEXMatineeActorAsset
#include "SQEXMatineeActorAsset.h"
#include "TresTextureStream.h"
#include "TresOverwriteAllowedMips.h"
#include "TresTexturePump.generated.h"

class APlayerController;

UCLASS()
class TRESGAME_API UTresTexturePump : public USQEXMatineeActorAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_InitialLoadNum;
    
    UPROPERTY(EditAnywhere)
    int32 m_InAdvance;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresTextureStream> m_TextureStream;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresOverwriteAllowedMips> m_OverwriteMaxAllowedMips;
    
private:
    UPROPERTY(Transient)
    APlayerController* m_PlayerController;
    
public:
    UTresTexturePump();
};

