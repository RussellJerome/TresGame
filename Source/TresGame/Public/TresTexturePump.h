// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/SQEXMatineeActorAsset.h"
#include "TresTexturePump.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTexturePump : public USQEXMatineeActorAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTexturePump")
	int m_InitialLoadNum;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTexturePump")
	int m_InAdvance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTexturePump")
	TArray<struct FTresTextureStream> m_TextureStream;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTexturePump")
	TArray<struct FTresOverwriteAllowedMips> m_OverwriteMaxAllowedMips;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTexturePump")
	class APlayerController* m_PlayerController;
};
