#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresVehiclePawnBase.h"
#include "TresLevelEntityWipeOutListener.h"
#include "ETresBodyPushPowerLevel.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PRIZE_KIND.h"
#include "TresVehiclePawnSpecialShip.generated.h"

class ATresCameraSpecialShip;
class ATresCameraSpecialShipLoc;
class ATresProjectileBase;
class ATresCameraSpecialShipHiSpd;
class ATresCameraRotTargetCtrl;
class UParticleSystem;
class USQEX_ParticleAttachDataAsset;
class ATresTreasureBox;
class ATresCameraBase;
class USoundBase;
class UTresReactorComponent;
class UTresStaticMeshComponent;
class UCurveVector;
class UParticleSystemComponent;
class UTresSkeletalMeshComponent;
class AActor;
class ATresEnemyLargeShipPawnBase;
class UTresCAShipComponent;

UCLASS()
class ATresVehiclePawnSpecialShip : public ATresVehiclePawnBase, public ITresLevelEntityWipeOutListener {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraSpecialShip> m_PlayerCameraSpecialShip;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraSpecialShip> m_PlayerCameraSpecialShip2;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraSpecialShip> m_PlayerCameraSpecialShipMaelstrom;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraSpecialShip> m_PlayerCameraSpecialShipMaelstrom2;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraSpecialShipLoc> m_PlayerCameraSpecialShipLoc;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraSpecialShipHiSpd> m_PlayerCameraSpecialShipHiSpd;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraSpecialShip> m_PlayerCameraSpecialShipRagingCannon;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraSpecialShip> m_PlayerCameraSpecialShipMaelstromRagingCannon;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraSpecialShip> m_PlayerCameraSpecialShipWindChaser;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraRotTargetCtrl> m_PlayerCameraSpecialShipTidalWave;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjCannon;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjRagingCannon;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjWindChaser;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjShadowMissileExp;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AimEffAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GuardEffAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GuardSuccessSmallEffAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GuardSuccessLargeEffAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SeaGodEffAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresTreasureBox> m_TreasureBoxClass;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_BGMAssetForFastTravel0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaxSpeedSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaxSpeedNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaxSpeedFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaxSpeedFastBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaxSpeedFastLuxordCompe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaxSpeedJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_AccSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DecSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_JumpAccDecSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RotInputPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_LStickRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_AimFrontCameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_AimSideCameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ScopeTargetDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ScopeZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ScopeZOffsetFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ScopeZOffsetRaging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ScopeZOffsetRagingFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ScopeLockNeedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ScopeLockRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ScopeLockRayRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_GuardTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_GuardStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DamageBanTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_ConvergingFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_CannonLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonIntervalFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonPitchFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonPitchMaelstromLongCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonPitchMaelstromLongCameraFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonLimitPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonLimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonLimitYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonTargetLimitPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonTargetLimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonTargetLimitYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonFinalLimitPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonFinalLimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonFinalLimitYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CannonFrontHomingTurnMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RagingCannonTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RagingCannonInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_WindChaserTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_WindChaserInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DashTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DashSpeedLuxordCompe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DashTimeLuxordCompe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresBodyPushPowerLevel m_Param_JumpPushPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MastFadeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CameraCollDisableTimeLongCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CameraCollDisableTimeRagingCannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CameraCollDisableTimeGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_AddSeaGodGauge_CoreBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_AddSeaGodGauge_MastBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_AddSeaGodGauge_MissileBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_AddSeaGodGauge_CannonHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_AddSeaGodGauge_DashHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BattleModeCaptureLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Param_MaelstromBaseCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaelstromBaseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaelstromBaseStartRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_Param_MaelstromBaseRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaelstromSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaelstromSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaelstromAccSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MaelstromDecSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_Param_MaelstromRotCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_MaelstromRotCurveCycleTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetMaelstromTrajectory;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_SndAssetHitShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_OscPitchG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_OscPitchK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_OscRollG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_OscRollK;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* m_pEffTrajectoryTop;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* m_pEffTrajectoryBack;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* m_pEffTrajectoryLeft;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* m_pEffTrajectoryRight;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_MastMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_PropsMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_FloorCollMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_FloorCollMesh2;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_CannonCollMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_CameraCollMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* m_Reactor;
    
    UPROPERTY()
    ATresCameraSpecialShip* m_Camera;
    
    UPROPERTY()
    ATresCameraSpecialShip* m_NormalCamera;
    
    UPROPERTY()
    ATresCameraSpecialShipHiSpd* m_HiSpeedCamera;
    
    UPROPERTY()
    ATresCameraBase* m_SeaGodCamera;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SeaGodEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_GuardEffect;
    
    UPROPERTY()
    AActor* m_pShipJumpNote;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AimEffect;
    
    UPROPERTY()
    ATresEnemyLargeShipPawnBase* m_pEnemyShipPawn;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresCAShipComponent* m_CAShipComp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_MaelstromTrajectory;
    
    UPROPERTY()
    ATresTreasureBox* m_pTreasureBox;
    
public:
    ATresVehiclePawnSpecialShip();
    UFUNCTION()
    void OnStartBossDefeatEffect();
    
    UFUNCTION(BlueprintPure)
    AActor* GetShipJumpNote() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SetRestrictionActoin(bool InRestrictionActoin);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMaterialFadeCutChange(bool InCutChange);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMaterialFade(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    bool BP_SetInputEnemyShip(AActor* InEnemyShip);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetCameraSpecialShipRotationAll(FRotator Rot, bool bWorld);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetBattleModeCapture(bool InBattleModeCapture);
    
    UFUNCTION(BlueprintCallable)
    bool BP_RequestStop();
    
    UFUNCTION(BlueprintCallable)
    bool BP_OpenNauticalChartUI();
    
    UFUNCTION(BlueprintCallable)
    void BP_JumpOverallCameraStart();
    
    UFUNCTION(BlueprintCallable)
    void BP_JumpOverallCameraEnd();
    
    UFUNCTION(BlueprintPure)
    bool BP_IsLongCameraMode() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_GetTroopsRewardData(TArray<FName>& OutItemKeyNames, TArray<int32>& OutItemNums, TArray<TEnumAsByte<PRIZE_KIND>>& OutPrizeItems) const;
    
    UFUNCTION(BlueprintPure)
    FRotator BP_GetCameraLocalRotation() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_BattleEndFocePlay();
    
    
    // Fix for true pure virtual functions not being implemented
};

