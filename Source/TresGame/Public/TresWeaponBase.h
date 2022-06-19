#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_OverwriteDiscrenment -FallbackName=ESQEX_OverwriteDiscrenment
#include "TresPawnBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ShadowQuality -FallbackName=ESQEX_ShadowQuality
#include "TresWeaponBase.generated.h"

class USQEXSEADSoundReferenceEnumSet;
class USQEX_ParticleAttachDataAsset;
class UTresWeaponMovementComponent;
class UTresSkeletalMeshComponent;
class UTresEffectAttachComponent;
class UTresAtkCollComponent;
class UParticleSystem;
class USceneComponent;
class UTresChrDataTableSet;
class UParticleSystemComponent;
class USQEX_KBD_Component;

UCLASS(Abstract)
class TRESGAME_API ATresWeaponBase : public ATresPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UTresWeaponMovementComponent* MyMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* MyAtkColl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
protected:
    UPROPERTY(Transient)
    ATresPawnBase* MyPawn;
    
    UPROPERTY(EditDefaultsOnly)
    FName MuzzleAttachPoint;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AppearEffectAttach;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearVisibleDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bIsEnableAppearScaleAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bIsDelayAppearScaleAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearScaleAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearScaleAnimStartScale;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bIsEnableAppearDitherAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bIsDelayAppearDitherAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDitherAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDitherAnimStartValue;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DisappearEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_DisappearEffectAttach;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearVisibleDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEnableDisappearScaleAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearScaleAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearScaleAnimEndScale;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEnableDisappearDitherAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearDitherAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearDitherAnimEndValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearWithScaleTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DestroyScaleAnimEndScale;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_CmnMagicCastEffect;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_CmnBadStatesEffect;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_CmnChargeEffect;
    
    UPROPERTY(DuplicateTransient, Transient)
    USQEX_ParticleAttachDataAsset* m_CmnStyleChangeChargeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pDrainEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pShootFlowEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Swing;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableMapCollisionOnFreeMove: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_DisableOverwriteMeshOrgOverwriteDiscrenment: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsNotifyOnlyVisible: 1;
    
    UPROPERTY(Export, Transient)
    USceneComponent* m_EquipAttachParent;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTresChrDataTableSet* m_pOwnerDataTableSet;
    
    UPROPERTY(DuplicateTransient, Transient)
    TEnumAsByte<ESQEX_OverwriteDiscrenment> m_MeshOrgOverwriteDiscrenment;
    
    UPROPERTY(DuplicateTransient, Transient)
    TEnumAsByte<ESQEX_ShadowQuality> m_MeshOrgShadowQuality;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_pDisappearEffect;
    
public:
    ATresWeaponBase();
    UFUNCTION(BlueprintPure)
    ATresPawnBase* GetPawnOwner() const;
    
    UFUNCTION(BlueprintPure)
    USQEX_KBD_Component* GetKBDComponent() const;
    
};

