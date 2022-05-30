#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresAnimInterface.h"
#include "TresNotifyInterface.h"
#include "TresEquipmentAssetUnit.h"
#include "TresEquipmentAccompanyPawnAssetUnit.h"
#include "TresEquipWeaponSlotWork.h"
#include "TresEquipmentComponent.generated.h"

class ATresPawnBase;
class UTresWeaponSet;
class USkeletalMeshComponent;
class ATresWeaponBase;
class USQEX_ParticleAttachDataAsset;
class UTresWearformSet;
class UTresFormAbilitySet;
class UTresPlayerMagicSet;
class UTresProjectileSet;
class UTresChrBaseParam;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresEquipmentComponent : public UActorComponent, public ITresAnimInterface, public ITresNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ATresPawnBase* m_AttachPawn;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* m_AttachSkin;
    
    UPROPERTY(Transient)
    TArray<ATresWeaponBase*> m_WeaponEquips;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UTresWeaponSet* MyWeaponSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bIsFixedEquip: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEquipmentAssetUnit> m_FixedEquips;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UTresWearformSet* m_WearformSet;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFormAbilitySet* m_FormAbilityAsset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UTresPlayerMagicSet* m_MagicSet;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UTresProjectileSet* m_ProjectileSet;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_CmnFormChangeChargeEffect;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTresPlayerMagicSet* m_ReplaceMagicSet;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTresProjectileSet* m_ReplaceProjectileSet;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<FTresEquipmentAccompanyPawnAssetUnit> m_ReplaceAccompanyPawnAsset;
    
    UPROPERTY(Transient)
    FTresEquipWeaponSlotWork m_EquipSlots[3];
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresChrBaseParam* m_pBaseParam;
    
public:
    UTresEquipmentComponent();
    
    // Fix for true pure virtual functions not being implemented
};

