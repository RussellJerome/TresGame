#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresPhotoHologramDebugMenu.h"
#include "TresHologramLocationResetInfo.h"
#include "TresPhotoHologramManager.generated.h"

class ATresGimmick_HologramVolumn;
class ATresCameraPhotoHologram;
class UDataTable;
class ATresPhotoHologramMapInfoActor;
class ATresPhotoHologramAreaVolume;
class ATresPlayerControllerBase;
class ATresPhotoHologramActor;
class UTresPhotoHologramWeaponAsset;
class UParticleSystemComponent;

UCLASS()
class UTresPhotoHologramManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<ATresGimmick_HologramVolumn> m_pHologramCtrlVolumn;
    
    UPROPERTY()
    TWeakObjectPtr<UDataTable> m_pHologramDataTable;
    
    UPROPERTY()
    TWeakObjectPtr<UDataTable> m_pWeaponDataTable;
    
    UPROPERTY()
    TWeakObjectPtr<UDataTable> m_pMapDataTable;
    
    UPROPERTY()
    TWeakObjectPtr<UDataTable> m_pCameraEffectDataTable;
    
    UPROPERTY()
    TWeakObjectPtr<ATresPhotoHologramMapInfoActor> m_pMapInfoActor;
    
    UPROPERTY()
    TArray<ATresPhotoHologramAreaVolume*> m_pAreaVolumes;
    
    UPROPERTY()
    ATresCameraPhotoHologram* m_pHologramCamera;
    
    UPROPERTY()
    TWeakObjectPtr<ATresPlayerControllerBase> m_pPC;
    
    UPROPERTY()
    TArray<ATresPhotoHologramActor*> m_HologramActorList;
    
    UPROPERTY()
    TWeakObjectPtr<ATresPhotoHologramActor> m_pCurrentActor;
    
    UPROPERTY()
    TWeakObjectPtr<ATresPhotoHologramActor> m_pLastCreatedActor;
    
    UPROPERTY()
    UClass* m_pCreateHologramActorClass;
    
    UPROPERTY()
    TArray<UTresPhotoHologramWeaponAsset*> m_pWeaponAssetList;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pSpawnMarkerPSC;
    
    UPROPERTY()
    TArray<FTresHologramLocationResetInfo> m_HologramLocationResetList;
    
    UPROPERTY()
    FTresPhotoHologramDebugMenu m_DebugMenu;
    
public:
    UTresPhotoHologramManager();
};

