#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAIPawnBase.h"
#include "ETresPlayerSpecificActionID.h"
#include "ETresPlayerJumpModes.h"
#include "ETresCommandKind.h"
#include "TresAttractionFlowAssetInfo.h"
#include "ETresActorSpecificActionID.h"
#include "ETresPlayerFlyModes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_AI_ThinkType -FallbackName=ESQEX_AI_ThinkType
#include "ETresPlayerUniqueID.h"
#include "TresPlayerPawnBase.generated.h"

class UParticleSystem;
class UTresFriendComponent;
class UTresPlayerStateEventComponent;
class AActor;
class ATresCharPawnBase;
class ATresCameraDiving;
class UTresPlayerPawnLoadAsset;
class ATresSimpleEffect;
class UTresAnimSet;
class AEmitterCameraLensEffectBase;
class USQEX_ParticleAttachDataAsset;
class UTresSpawnPointDistanceScorer;
class UTresSpawnPointAvoidActorFilter;
class UParticleSystemComponent;
class UTresPlayerStateEvent;
class UTresUICommandInfoBase;

UCLASS(Abstract, Config=Game)
class ATresPlayerPawnBase : public ATresAIPawnBase {
    GENERATED_BODY(BlueprintReadWrite)
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresPlayerSpecificAction, TEnumAsByte<ETresPlayerSpecificActionID>, ActionID, int32, SubID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresPlayerEndCommandAction, TEnumAsByte<ETresCommandKind>, CommandKind);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresPlayerBeginCommandAction, TEnumAsByte<ETresCommandKind>, CommandKind);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresActorSpecificAction, TEnumAsByte<ETresActorSpecificActionID>, ActionID, AActor*, SendActor, int32, SubID);
    
private:
    UPROPERTY(BlueprintReadWrite, Export, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFriendComponent* MyFrdMgr;
    
    UPROPERTY(Export, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresPlayerStateEventComponent* MyStateEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySprintDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyForceWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyWaterFlowAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MyHopRotateModeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyHopEffectRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyPoleEffectRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bEnableClimbing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fClimbingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fClimbingBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fClimbingFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fClimbingFrontFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fClimbingFrontNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fClimbingFinalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bEnableWallRun: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyWallRunSpeedScaleUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyWallRunSpeedScaleSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyJumpPowerNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyJumpPowerHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyJumpPowerHighLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyJumpPowerHighLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyJumpPowerSuper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyJumpPowerDouble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyJump2ndEnableMinimumVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySmallJumpGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyGlideGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyGlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyGlideTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFloatingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFloatingGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFloatingGravityScale2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAttackRiseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAttackRiseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAttackFirstAirMoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bEnableDiveFall: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyDiveFallStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyDiveFallRotateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyDiveFallGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyDiveFallMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyDiveFallLockonRangeXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyDiveFallLockonLimitZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAirSlideSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAirSlideSpeedScaleLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAirSlideSpeedScaleLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySuperSlideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySuperSlideTimeLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySuperSlideTimeLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySuperSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SuperSlideMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySuperSlideBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyPoleTurnRotMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyRailSlideCheckRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyRailSlideCheckAirRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyRailSlideShotMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyRailSlideShotInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySlopeSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySlopeSlideAccelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySlopeSlideMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyWallRunSideSwitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyWallRunDownSwitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyWallRunSideMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverFindLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverSlideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CoverSlideMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverSlideBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverSlideMutekiTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverCommandRreadyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverSlideSlowRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverSlideSlowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverShotSlideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverShotSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CoverShotSlideMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverShotSlideBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverShotMutekiTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverShotSlideHomingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverShotLockonLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCoverShotLockonSightMoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyCommandCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAirSlideCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAirGuardCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAntiFormCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyReactionCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyDamageEndCancelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyGuardHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyGuardMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAutoLockonLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAutoLockonNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyManualLockonLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyManualLockonOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyShootLockonLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAthleticLockonLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAthleticLockonRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MySonicAttackModeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyStylePointMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyStylePointAddRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyStylePointAddRateLv0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyStylePointAddRateLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyStylePointAddRateLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MyAntiFormGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalModeStylePointAddRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalModeStylePointAddRateLv0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalModeStylePointAddRateLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalModeStylePointAddRateLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalModeAntiFormGenerateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalModeJustGuardTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalChargeStylePointAddRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MyStylePointAddWithoutHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyStylePointDecStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyStylePointDecInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyStylePointDec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyStyleFinishOffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyStyleFinishOffsetTimeWeaponChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyFriendPointMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFriendPointTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyAttractionPointMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyFocusPointAddHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyFocusPointAddTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFocusPointAddInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFocusPointConvertRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyFocusPointNeedAF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFocusAspirRateLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFocusAspirRateLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFocusAspirRateLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyFpChargeAddTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFpChargeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAthleticSlideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAthleticSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAthleticSlideKickAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAthleticAttackSlowRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyAthleticAttackSlowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimSurfaceBuoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimSurfaceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimDiveLowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimDiveHighSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimDiveDiveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimDiveRiseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimDashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimDashTime;
    
    UPROPERTY(BlueprintReadWrite)
    float MySwimDiveOxygenTime;
    
    UPROPERTY(BlueprintReadWrite)
    float MySwimDiveDashOxygenConsumeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimDiveDashDisableInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimDivingHighSpeedMoveRotSpeedYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MySwimDivingHighSpeedMoveRotSpeedPitch;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresCameraDiving* m_pSwimDivingCamera;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TEnumAsByte<ETresPlayerFlyModes> MyFlyMotion;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TEnumAsByte<ETresPlayerJumpModes> MyJumpMotion;
    
    UPROPERTY(Config, BlueprintReadWrite)
    uint32 bDispDebugInfo: 1;
    
    UPROPERTY(Config, BlueprintReadWrite)
    uint32 bDispNetDebugInfo: 1;
    
    UPROPERTY(Config, BlueprintReadWrite)
    uint32 bDebugDisableGameOver: 1;
    
    UPROPERTY(Config, BlueprintReadWrite)
    uint32 m_bAlwaysEnableWallRun: 1;
    
    UPROPERTY(Config, BlueprintReadWrite)
    uint32 m_bDebugWallRunStartOff: 1;
    
    UPROPERTY(Config, BlueprintReadWrite)
    uint32 m_bDebugDisableFriend: 1;
    
    UPROPERTY(Config, BlueprintReadWrite)
    uint32 m_bDebugShooterModeInputType: 1;
    
    UPROPERTY(Config, BlueprintReadWrite)
    uint32 m_bWallTurnWithoutAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_bDebugHighJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebug2ndJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugDodge: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAirDodge: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugRiskDodge: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugSuperJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_bDebugSuperSlideLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugPoleSpin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugPoleSwing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugWallKick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugEnemyTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAirRecovery: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugBlowCounter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAirRecoveryInputChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugGuard: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugGuardCounter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugRevengeImpact: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugRevengeDive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugRevengeEx: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugDodgeCounter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugComboMaster: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_bDebugComboPlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_bDebugAirComboPlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugFinTriple: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugFinThrust: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugFinFlash: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugFinDown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugLaunchSpin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAirRollBeat: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugFinDonald1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugFinDonald2: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugFinDonald3: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugFinGoofy1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugFinGoofy2: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugSonicSlash: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugSonicJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugSonicTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugSonicWheel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAttractionVS: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAttractionBM: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAttractionSM: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAttractionSC: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAttractionMG: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAttractionTC: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAttractionAS: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAttractionWS: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugAttractionFF: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugShieldAutoGrowUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugMpCharge: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugFpCharge: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugChargeBerserkTest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugCuragan: 1;
    
    UPROPERTY(Config, BlueprintReadWrite)
    float m_fDebugAttackMoveLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugForceUseSpawnPointVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugDispNearSpawnPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_nDebugTestMode;
    
    UPROPERTY(Config, BlueprintReadWrite)
    FVector m_vDebugTmpVec0;
    
    UPROPERTY(Config, BlueprintReadWrite)
    FVector m_vDebugTmpVec1;
    
    UPROPERTY(Config, BlueprintReadWrite)
    FVector m_vDebugTmpVec2;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TSubclassOf<ATresSimpleEffect> m_AthleticRoot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    uint32 m_bFriendDisableAutoCreate: 1;
    
    UPROPERTY(BlueprintReadWrite)
    ESQEX_AI_ThinkType m_FriendAIThinkType;
    
    UPROPERTY(EditDefaultsOnly)
    FTresAttractionFlowAssetInfo m_AttractionFlowAssetInfo[16];
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TArray<float> m_AttractionFlowDrawingHistoryRatio;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UTresPlayerPawnLoadAsset* m_LoadAsset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 m_GameStartChrLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bEnableWeaponChangeEquip: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    UTresAnimSet* m_RestrictWeaponModeAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFriendComboFinishRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFriendComboFinishRangeHalf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyFriendComboFinishRangeNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyFriendComboFinishAddRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyFriendComboFinishAddRateRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyFriendComboFinishAddRateRangeHalf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MyFriendComboFinishAddRateRangeNear;
    
    UPROPERTY(BlueprintAssignable)
    FTresPlayerSpecificAction OnPlayerSpecificAction;
    
    UPROPERTY(BlueprintAssignable)
    FTresActorSpecificAction OnActorSpecificAction;
    
    UPROPERTY(BlueprintAssignable)
    FTresPlayerBeginCommandAction OnPlayerBeginCommandAction;
    
    UPROPERTY(BlueprintAssignable)
    FTresPlayerEndCommandAction OnPlayerEndCommandAction;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pFireEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pHopEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pPoleEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pPoleEffectH;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pWallRunEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pSprintEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pAthleticHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AEmitterCameraLensEffectBase> m_LensEffectClass;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pFocusAspirEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pSwanDiveEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pGuardReflectEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pJustGuardEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pCriticalCounterHitEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UParticleSystem* m_pCoverShotDestroyEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    USQEX_ParticleAttachDataAsset* m_AntiFormEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyDarkScreenRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDebugHitStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyHitStopTimeSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyHitStopTimeBig;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<AActor*> m_OverlappedAttractionFlowDrawingActors;
    
    UPROPERTY(BlueprintReadWrite)
    UTresSpawnPointDistanceScorer* m_pSpawnPointDistanceScorer;
    
    UPROPERTY(BlueprintReadWrite)
    UTresSpawnPointAvoidActorFilter* m_pSpawnPointFilter;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ETresPlayerUniqueID m_PlayerUniqueID;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pDeathSentenceCountEffect;
    
public:
    ATresPlayerPawnBase();
    UFUNCTION(BlueprintCallable)
    void RequestEndCommandKind(TEnumAsByte<ETresCommandKind> inCommand, int32 InParam0);
    
    UFUNCTION(BlueprintCallable)
    bool RemotePlayerStateEvent(FName EventName, AActor* inActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayerSpecificAction(ETresPlayerSpecificActionID ActionID, int32 SubID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayerEndCommandAction(ETresCommandKind CommandKind);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayerBeginCommandAction(ETresCommandKind CommandKind);
    
    UFUNCTION(BlueprintCallable)
    void NotifySpecificActionAccompanyPawn(int32 ID, int32 Param0, int32 Param1, int32 Param2);
    
    UFUNCTION(BlueprintCallable)
    FVector GetSpecificActionTargetPos(int32 ID);
    
    UFUNCTION(BlueprintPure)
    ATresCharPawnBase* GetSpecificActionAccompanyPawn(int32 ID) const;
    
    UFUNCTION(BlueprintCallable)
    UTresPlayerStateEvent* GetPlayerStateEventByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    UTresPlayerStateEvent* GetPlayerStateEvent(int32 Idx);
    
    UFUNCTION(BlueprintCallable)
    UTresFriendComponent* GetFriendManager();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugWarpCheck(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetVikingShipParam(float fIdlePitch, float fIdlePow, float fIdleAcc, float fIdleBrk, float fAtkPitch, float fAtkPow, float fAtkAcc, float fAtkBrk);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetTmpVector(int32 InSlot, float InX, float InY, float InZ);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetRailSlideShotMax(int32 InMax);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetRailSlideShotInterval(float InTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetRailSlideCheckRange(float InRange, float InAirRange);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetInputCancel(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetHitStopTime(int32 InMode, float Timer);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetGuardMoveSpeed(float InSpeed);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetGuardHoldTime(float InTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetGuardEnableDisp(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetGlideParam(int32 bEnable, float InGravityScale, float InSpeed, float InTurnRate);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetFriendComboFinishParam(float InRange, float InRangeHalf, float InRangeNear, int32 InAddRate, int32 InAddRateRange, int32 InAddRateRangeHalf, int32 InAddRateRangeNear);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetFocusAspirRate(float fAspirLv1, float fAspirLv2, float fAspirLv3);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetFloatingMode(bool bEnable, bool IsSpecial, float InGravityScale, float InSpeed);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetDiveFallLockon(float InRangeXY, float InLimitZ);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCoverSlowParam(float InRate, float InTeme);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCoverMoveSpeed(float InSpeed);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCoverFindLimit(float InLimit);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetComboTimeDisp(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetClimbingParam(int32 InVersion, float InRadius, float InFront, float InFrontF, float InFrontN, float InFinalSpace, float InBottom);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetClimbingBodyOff();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugResetTmpVector();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPlayerFallIntoBottomlessPit(float Z);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableSkillCamera(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableDamageAlwaysHeavy(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableDamageAddVelocity(float InPow);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCuragan(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugChangeWeaponType(int32 InType);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugChangePlayerWeaponEquip(int32 InSlotIndex, int32 InWeaponItemID);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBurnTest(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetWaterFlowAngle(float fWaterFlowAngle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetForceWalkSpeed(float fForceWalkSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetEnableShootLockModeForRIKU(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetEnableGuardHitBackControl(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableWallRunPointDispOff(bool inSw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableWallRunPointDisp(bool inSw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisablePolePointDisp(bool inSw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableHopPointDisp(bool inSw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableFreeRunPointDisp(bool inSw);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool BP_NotifyForcedStartSnowCurling(UTresUICommandInfoBase* pUICommandInfo);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool BP_NotifyForcedStartSnowChase(UTresUICommandInfoBase* pUICommandInfo);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool BP_NotifyForcedStartDiveFall();
    
};

