// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "TresWeaponBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresWeaponBase : public ATresPawnBase
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	//class UTresWeaponMovementComponent* MyMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class UTresSkeletalMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class UTresAtkCollComponent* MyAtkColl;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	//class UTresEffectAttachComponent* MyEffectAtt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class ATresPawnBase* MyPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	FName MuzzleAttachPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class UParticleSystem* m_AppearEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	FName m_AppearEffectAttach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_AppearVisibleDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	bool m_bIsEnableAppearScaleAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	bool m_bIsDelayAppearScaleAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_AppearScaleAnimTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_AppearScaleAnimStartScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	bool m_bIsEnableAppearDitherAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	bool m_bIsDelayAppearDitherAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_AppearDitherAnimTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_AppearDitherAnimStartValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class UParticleSystem* m_DisappearEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	FName m_DisappearEffectAttach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_DisappearVisibleDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	bool m_bIsEnableDisappearScaleAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_DisappearScaleAnimTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_DisappearScaleAnimEndScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	bool m_bIsEnableDisappearDitherAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_DisappearDitherAnimTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_DisappearDitherAnimEndValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_DisappearWithScaleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	float m_DestroyScaleAnimEndScale;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class USQEX_ParticleAttachDataAsset* m_CmnMagicCastEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class USQEX_ParticleAttachDataAsset* m_CmnBadStatesEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class USQEX_ParticleAttachDataAsset* m_CmnChargeEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class USQEX_ParticleAttachDataAsset* m_CmnStyleChangeChargeEffect;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class UParticleSystem* m_pDrainEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class UParticleSystem* m_pShootFlowEffect;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Hit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Swing;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	bool m_bEnableMapCollisionOnFreeMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	bool m_DisableOverwriteMeshOrgOverwriteDiscrenment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	bool m_bIsNotifyOnlyVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class USceneComponent* m_EquipAttachParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class UTresChrDataTableSet* m_pOwnerDataTableSet;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	//TEnumAsByte<ESQEX_OverwriteDiscrenment> m_MeshOrgOverwriteDiscrenment;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	//TEnumAsByte<ESQEX_ShadowQuality> m_MeshOrgShadowQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponBase")
	class UParticleSystemComponent* m_pDisappearEffect;

	UFUNCTION(BlueprintPure, Category = "TresDetectMarkerComponentBase")
	class ATresPawnBase* GetPawnOwner() { return nullptr; };

	//UFUNCTION(BlueprintPure, Category = "TresDetectMarkerComponentBase")
	//class USQEX_KBD_Component* GetKBDComponent();
};
