#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "UObject/NoExportTypes.h"
#include "TresPhotoHologramEditEffectDef.h"
#include "UObject/NoExportTypes.h"
#include "TresAreaVolumeThreeParamEventDelegate.h"
#include "TresAreaVolumeSimpleEventDelegate.h"
#include "Engine/LatentActionManager.h"
#include "TresGimmick_HologramVolumn.generated.h"

class UDataTable;
class UParticleSystem;
class USQEX_ParticleAttachDataAsset;
class ATresCharPawnBase;
class UObject;

UCLASS()
class ATresGimmick_HologramVolumn : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* HologramDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* HologramWeaponTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* HologramMapDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* MapSetDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CameraEffectDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CameraEffectNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SpawnMarkerEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FName MarkerEffectShapeParam;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnMarkerWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor SpawnMarkerChangeColor;
    
    UPROPERTY(EditAnywhere)
    bool EnableMarkerChangeColor;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* CameraEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UParticleSystem*> EditMarkerEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresPhotoHologramEditEffectDef> EditMarkerEffectDef;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PoseEditTimeScale;
    
    UPROPERTY(EditDefaultsOnly)
    int32 FacialEditTimeScale;
    
    UPROPERTY(EditDefaultsOnly)
    int32 WeaponEditTimeScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SpaceCheck_PlayerHeight;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SpaceCheck_CollisionZAdjust;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float PlayerLocationResetDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool KeepReactorHeightToMesh;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector SpawnHologramHeightAdjust;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool KeepFocusCameraInWeaponEdit;
    
    UPROPERTY(EditAnywhere)
    bool EnableInputPoseOffsetSupport;
    
    UPROPERTY(BlueprintAssignable)
    FTresAreaVolumeSimpleEvent OnWarningStart;
    
    UPROPERTY(BlueprintAssignable)
    FTresAreaVolumeSimpleEvent OnWarningEnd;
    
    UPROPERTY(BlueprintAssignable)
    FTresAreaVolumeSimpleEvent OnPlayerLocationReset;
    
    UPROPERTY(BlueprintAssignable)
    FTresAreaVolumeThreeParamEvent OnHologramLocationReset;
    
    UPROPERTY(BlueprintAssignable)
    FTresAreaVolumeSimpleEvent OnLoadProject;
    
    UPROPERTY(BlueprintAssignable)
    FTresAreaVolumeSimpleEvent OnHologramModeEnd;
    
    ATresGimmick_HologramVolumn();
    UFUNCTION(BlueprintCallable)
    void StartHologramModeUI();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveWarningStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveWarningEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayerLocationReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveLoadProject();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveHologramModeEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveHologramLocationReset(ATresCharPawnBase* pTargetActor, FVector TargetLocation, bool IsPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnLocationResetEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadHologramProjectEnd();
    
    UFUNCTION(BlueprintCallable, meta = (LatentInfo = "LatentInfo"))
    void ApplyLoadProject(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHologramLocationReset();
    
};

