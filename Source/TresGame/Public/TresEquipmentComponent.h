// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresEquipmentComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRESGAME_API UTresEquipmentComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	class ATresPawnBase* m_AttachPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	class USkeletalMeshComponent* m_AttachSkin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	TArray<class ATresWeaponBase*> m_WeaponEquips;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	class UTresWeaponSet* MyWeaponSet;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	bool m_bIsFixedEquip;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	TArray<struct FTresEquipmentAssetUnit> m_FixedEquips;*/

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	class UTresWearformSet* m_WearformSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	class UTresFormAbilitySet* m_FormAbilityAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	class UTresPlayerMagicSet* m_MagicSet;*/

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	//class UTresProjectileSet* m_ProjectileSet;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	class USQEX_ParticleAttachDataAsset* m_CmnFormChangeChargeEffect;*/

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	class UTresPlayerMagicSet* m_ReplaceMagicSet;*/

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	class UTresProjectileSet* m_ReplaceProjectileSet;*/

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	TArray<struct FTresEquipmentAccompanyPawnAssetUnit> m_ReplaceAccompanyPawnAsset;*/

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	//struct FTresEquipWeaponSlotWork m_EquipSlots;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipmentComponent")
	class UTresChrBaseParam* m_pBaseParam;*/
};
