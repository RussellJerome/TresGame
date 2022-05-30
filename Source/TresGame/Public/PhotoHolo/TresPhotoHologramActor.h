#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresPhotoHologramFacialDef.h"
#include "TresHologramSubAnimReplaceInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresHologramActorPoseTableInfo.h"
#include "ETresCommandKind.h"
#include "TresPhotoHologramActor.generated.h"

class UTresReactorComponent;
class UParticleSystem;
class UDataTable;
class USQEX_ParticleAttachDataAsset;
class UTresBodyCollPrimitive;
class ATresPlayerControllerBase;
class UTresLockonTargetComponent;
class UTresPhotoHologramWeaponAsset;

UCLASS()
class ATresPhotoHologramActor : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresHologramActorSimpleEvent);
    
protected:
    UPROPERTY(EditAnywhere)
    float StartWalkSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxWalkSpeed;
    
    UPROPERTY(EditAnywhere)
    float StartWalkSpeedKeepTime;
    
    UPROPERTY(EditAnywhere)
    float WalkSpeedAccelerateTime;
    
    UPROPERTY(EditAnywhere)
    float StartRotateSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxRotateSpeed;
    
    UPROPERTY(EditAnywhere)
    float StartRotateSpeedKeepTime;
    
    UPROPERTY(EditAnywhere)
    float RotateSpeedAccelerateTime;
    
    UPROPERTY(EditAnywhere)
    float CameraDistance;
    
    UPROPERTY(EditAnywhere)
    FRotator CameraAimRotation;
    
    UPROPERTY(EditAnywhere)
    float FacialCameraDistance;
    
    UPROPERTY(EditAnywhere)
    bool IsFixLOD;
    
    UPROPERTY(EditAnywhere)
    float AfterAppearWaitTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float PoseChangeTime;
    
    UPROPERTY(EditAnywhere)
    float MoveJudgementDistance;
    
    UPROPERTY(EditAnywhere)
    float MoveJudgementRotateYaw;
    
    UPROPERTY(EditAnywhere)
    float EffectRespawnTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 MyMeshBonamikPreRoll;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool MyMeshStopBonamik;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MyMeshStopBonamikTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool MyMeshReturnBonamikInEdit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MyMeshReturnBonamikBlendTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool MyMeshResetBonamikOnEditMode;
    
    UPROPERTY(EditDefaultsOnly)
    int32 VfxGroupId_Appear;
    
    UPROPERTY(EditDefaultsOnly)
    int32 VfxGroupId_Disappear;
    
    UPROPERTY(EditDefaultsOnly)
    int32 VfxGroupId_PoseChange;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* EditMarkerEffectData;
    
    UPROPERTY(EditAnywhere)
    float ResetCameraOnDeleteTotalTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresPhotoHologramFacialDef> FacialDefList;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PoseDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* AntiFormEffect;
    
    UPROPERTY(EditAnywhere)
    FTresHologramSubAnimReplaceInfo SubAnimReplaceInfo;
    
    UPROPERTY(BlueprintAssignable)
    FTresHologramActorSimpleEvent OnReceiveRemoveEvent;
    
    UPROPERTY(EditDefaultsOnly)
    bool MeshInvisibleInPhoto;
    
    UPROPERTY(EditDefaultsOnly)
    bool MeshHeightAdjustable;
    
    UPROPERTY(EditDefaultsOnly)
    float HeightAdjustMax;
    
    UPROPERTY(EditDefaultsOnly)
    float HeightAdjustTotalTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool MeshPitchAdjustable;
    
    UPROPERTY(EditDefaultsOnly)
    float PitchAdjustMax;
    
    UPROPERTY(EditDefaultsOnly)
    float PitchAdjustMin;
    
    UPROPERTY(EditDefaultsOnly)
    float PitchAdjustTotalTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool MeshRollAdjustable;
    
    UPROPERTY(EditDefaultsOnly)
    float RollAdjustMax;
    
    UPROPERTY(EditDefaultsOnly)
    float RollAdjustMin;
    
    UPROPERTY(EditDefaultsOnly)
    float RollAdjustTotalTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool RotateAroundFocus;
    
    UPROPERTY(EditDefaultsOnly)
    bool AddExtraRootCollision;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ExtraRootCollisionOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float ExtraRootCollisionLowestHeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsAdjustMeshHeightAfterPoseChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsCheckLocTrembling;
    
private:
    UPROPERTY(Export)
    UTresReactorComponent* m_pReactor;
    
    UPROPERTY()
    TWeakObjectPtr<ATresPlayerControllerBase> m_pPC;
    
    UPROPERTY(Export)
    UTresLockonTargetComponent* m_pFocusTarget;
    
    UPROPERTY(Export)
    UTresLockonTargetComponent* m_pFacialFocusTarget;
    
    UPROPERTY(Export)
    TArray<UTresBodyCollPrimitive*> m_BodyColls;
    
    UPROPERTY(Export)
    TArray<UTresBodyCollPrimitive*> m_WeaponColls;
    
    UPROPERTY()
    TArray<UTresPhotoHologramWeaponAsset*> m_WeaponAssetList;
    
    UPROPERTY()
    TArray<FTresHologramActorPoseTableInfo> m_PoseTableList;
    
public:
    ATresPhotoHologramActor();
    UFUNCTION(BlueprintCallable)
    void SetPose(int32 Index, bool bInit, int32 PresetFacialIndex, int32 PresetWeaponVisibleFlag);
    
    UFUNCTION(BlueprintCallable)
    void RequestRemoveHologram();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSetWeaponVisible(bool bVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRemoveEvent();
    
private:
    UFUNCTION()
    void OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent);
    
};

