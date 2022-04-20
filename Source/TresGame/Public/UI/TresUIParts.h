// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame.h"
#include "SwfMovie.h"
#include "TresMoviePlayer.h"
#include "TresUIParts.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIParts : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIParts")
	FString m_strAssetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIParts")
	class UTresMoviePlayer* m_pMoviePlayer;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIParts")
	//class UTresASProxyTresCoreUIComponent* m_ASProxyUIComponent;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIParts")
	//class UTresUIManager* m_pUIManager;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIParts")
	//struct FTresUIPreloadInfo m_PreloadInfo;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIParts")
	//TArray<class UTresASProxyTresControlsFloatTexture*> m_FloatTextures;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIParts")
	//TArray<class UTresASProxy*> m_ManagedASProxy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIParts")
	class USwfMovie* m_SwfMovie;

	UFUNCTION(BlueprintNativeEvent, Category = "TresUIParts")
	int OnLoadIcon(const FString& Path);
	int OnLoadIcon_Implementation(const FString& Path) { return 0; };

	UFUNCTION(BlueprintNativeEvent, Category = "TresUIParts")
	bool OnListRefreshData(class UGFxObject* UIComponent, class UGFxObject* AnchorComponent, int ListIndex, int PrevListIndex);
	bool OnListRefreshData_Implementation(class UGFxObject* UIComponent, class UGFxObject* AnchorComponent, int ListIndex, int PrevListIndex) { return false; };

	UFUNCTION(BlueprintNativeEvent, Category = "TresUIParts")
	bool OnListIndexChange(class UGFxObject* UIComponent, class UGFxObject* AnchorComponent, int ListIndex, int PrevListIndex);
	bool OnListIndexChange_Implementation(class UGFxObject* UIComponent, class UGFxObject* AnchorComponent, int ListIndex, int PrevListIndex) { return false; };

	UFUNCTION(BlueprintNativeEvent, Category = "TresUIParts")
	bool OnFocusOut(class UGFxObject* UIComponent, bool MoveNext);
	bool OnFocusOut_Implementation(class UGFxObject* UIComponent, bool MoveNext) { return false; };

	UFUNCTION(BlueprintNativeEvent, Category = "TresUIParts")
	bool OnFocusIn(class UGFxObject* UIComponent);
	bool OnFocusIn_Implementation(class UGFxObject* UIComponent) { return false; };

	UFUNCTION(BlueprintNativeEvent, Category = "TresUIParts")
	void OnFloatTextureCallback(int ID, class UGFxObject* FloatTextureMovieClip);
	void OnFloatTextureCallback_Implementation(int ID, class UGFxObject* FloatTextureMovieClip) {};

	UFUNCTION(BlueprintNativeEvent, Category = "TresUIParts")
	int OnCallback(int ID, int Param);
	int OnCallback_Implementation(int ID, int Param) { return 0; };

	UFUNCTION(BlueprintNativeEvent, Category = "TresUIParts")
	bool OnAnchorOut(class UGFxObject* UIComponent, class UGFxObject* AnchorComponent, int Index, int Dir);
	bool OnAnchorOut_Implementation(class UGFxObject* UIComponent, class UGFxObject* AnchorComponent, int Index, int Dir) { return false; };

	UFUNCTION(BlueprintNativeEvent, Category = "TresUIParts")
	bool OnAnchorIn(class UGFxObject* UIComponent, class UGFxObject* AnchorComponent, int Index, int Dir);
	bool OnAnchorIn_Implementation(class UGFxObject* UIComponent, class UGFxObject* AnchorComponent, int Index, int Dir) { return false; };
	
};
