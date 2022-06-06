#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresPhotoLoadWork.h"
#include "TresAlbumPhotoManager.generated.h"

class UTexture2D;

UCLASS()
class UTresAlbumPhotoManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<int32> m_PhotoIdList;
    
    UPROPERTY()
    TArray<FTresPhotoLoadWork> m_PhotoLoadWorkPool;
    
    UPROPERTY()
    UTexture2D* m_pTargetTexture;
    
    UPROPERTY()
    TArray<UTexture2D*> m_ReleaseTextureBuffer;
    
public:
    UTresAlbumPhotoManager();
};

