// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresRestrictActionVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresRestrictActionVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_TownArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictATTACK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictMAGIC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictITEM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictSITUATION;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictLINK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictATTRACTIONFLOW;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictSTYLE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictFRIENDLINK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictGUARD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictJUMP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictSHOOTLOCK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictRUN;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictDIVEFALL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictDeepDiving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictCancelSituation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictAlwaysUseSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRestrictActionVolume")
	bool m_RestrictPhotoMode;
};
