#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "SlideShowData.h"
#include "SlideShowIconData.h"
#include "SlideShowFrameData.h"
#include "TresUIDataAssetSlideShow.generated.h"

class USwfMovie;
class UObject;

UCLASS()
class UTresUIDataAssetSlideShow : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudSlideShow;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSlideShowData> Datas;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> SlideShowSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSlideShowIconData> IconDatas;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSlideShowFrameData> FrameDatas;
    
    UTresUIDataAssetSlideShow();
};

