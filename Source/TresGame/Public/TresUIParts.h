#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresUIPreloadInfo.h"
#include "TresUIParts.generated.h"

class UTresMoviePlayer;
class UTresASProxy;
class UTresASProxyTresCoreUIComponent;
class USwfMovie;
class UTresUIManager;
class UTresASProxyTresControlsFloatTexture;
class UGFxObject;

UCLASS()
class UTresUIParts : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FString m_strAssetName;
    
    UPROPERTY(Transient)
    UTresMoviePlayer* m_pMoviePlayer;
    
    UPROPERTY(Transient)
    UTresASProxyTresCoreUIComponent* m_ASProxyUIComponent;
    
    UPROPERTY(Transient)
    UTresUIManager* m_pUIManager;
    
private:
    UPROPERTY(Transient)
    FTresUIPreloadInfo m_PreloadInfo;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsFloatTexture*> m_FloatTextures;
    
    UPROPERTY(Transient)
    TArray<UTresASProxy*> m_ManagedASProxy;
    
    UPROPERTY(Transient)
    USwfMovie* m_SwfMovie;
    
public:
    UTresUIParts();
    UFUNCTION()
    int32 OnLoadIcon(const FString& Path);
    
    UFUNCTION()
    bool OnListRefreshData(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 ListIndex, int32 PrevListIndex);
    
    UFUNCTION()
    bool OnListIndexChange(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 ListIndex, int32 PrevListIndex);
    
    UFUNCTION()
    bool OnFocusOut(UGFxObject* UIComponent, bool MoveNext);
    
    UFUNCTION()
    bool OnFocusIn(UGFxObject* UIComponent);
    
    UFUNCTION()
    void OnFloatTextureCallback(int32 ID, UGFxObject* FloatTextureMovieClip);
    
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
    UFUNCTION()
    bool OnAnchorOut(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 Index, int32 Dir);
    
    UFUNCTION()
    bool OnAnchorIn(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 Index, int32 Dir);
    
};

