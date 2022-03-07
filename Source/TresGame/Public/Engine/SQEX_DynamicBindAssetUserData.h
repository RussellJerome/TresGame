// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEX_DynamicBindAssetUserData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API USQEX_DynamicBindAssetUserData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_DynamicBindAssetUserData")
	struct FStringAssetReference m_BindTargetPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_DynamicBindAssetUserData")
	class UAssetUserData* m_AssetUserData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_DynamicBindAssetUserData")
	class UObject* m_BindTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_DynamicBindAssetUserData")
	class UAssetUserData* m_OriginalAssetUserData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_DynamicBindAssetUserData")
	class UAssetUserData* m_DuplicatedAssetUserData;

	/*Unbinds the Asset User Data*/
	UFUNCTION(BlueprintCallable, Category = "SQEX_DynamicBindAssetUserData")
	bool Unbind() { return false; };

	/*Binds the Asset User Data*/
	UFUNCTION(BlueprintCallable, Category = "SQEX_DynamicBindAssetUserData")
	bool Bind() { return false; };
};
