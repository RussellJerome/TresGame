// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "TresGame.h"
#include "TresChrInitData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresChrInitData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_PlayerSora;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_PlayerSoraTuto;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_PlayerSoraTSGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_PlayerRiku29;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_PlayerAqua;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_PlayerKairi;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_PlayerRoxas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendSora;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendDonald;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendGoofy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendRiku;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendMickey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendAqua;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendJackSparrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendWoody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendBuzz;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendHercules;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendRapunzel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendFlynn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendSulley;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendMike;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendMarshmallow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendBaymax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendKairi;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendTerra;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendVentus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendRoxas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendLea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	FTresChrInitEquip m_FriendXion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataInitData")
	class UDataTable* m_SpecialShipLevelData;
};

