// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresAIPawnBase.h"
#include "TresPlayerPawnBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresPlayerSpecificAction, TEnumAsByte<ETresPlayerSpecificActionID>, ActionID, int, SubID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresPlayerEndCommandAction, TEnumAsByte<ETresCommandKind>, CommandKind);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresPlayerBeginCommandAction, TEnumAsByte<ETresCommandKind>, CommandKind);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresActorSpecificAction, TEnumAsByte<ETresActorSpecificActionID>, ActionID, class AActor*, SendActor, int, SubID);

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresPlayerPawnBase : public ATresAIPawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UTresFriendComponent* MyFrdMgr;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	//class UTresPlayerStateEventComponent* MyStateEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySprintSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySprintDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyForceWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyWaterFlowAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool MyHopRotateModeB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyHopEffectRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyPoleEffectRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bEnableClimbing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float m_fClimbingRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float m_fClimbingBottom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float m_fClimbingFront;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float m_fClimbingFrontFar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float m_fClimbingFrontNear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float m_fClimbingFinalSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bEnableWallRun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyWallRunSpeedScaleUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyWallRunSpeedScaleSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyJumpPowerNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyJumpPowerHigh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyJumpPowerHighLv2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyJumpPowerHighLv3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyJumpPowerSuper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyJumpPowerDouble;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyJump2ndEnableMinimumVelocityZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySmallJumpGravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyGlideGravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyGlideSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyGlideTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFloatingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFloatingGravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFloatingGravityScale2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAttackRiseThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAttackRiseRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAttackFirstAirMoveRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bEnableDiveFall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyDiveFallStartHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyDiveFallRotateScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyDiveFallGravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyDiveFallMoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyDiveFallLockonRangeXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyDiveFallLockonLimitZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAirSlideSpeedScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAirSlideSpeedScaleLv2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAirSlideSpeedScaleLv3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySuperSlideTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySuperSlideTimeLv2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySuperSlideTimeLv3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySuperSlideSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float m_SuperSlideMinSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySuperSlideBreak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyPoleTurnRotMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyRailSlideCheckRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyRailSlideCheckAirRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyRailSlideShotMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyRailSlideShotInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySlopeSlideSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySlopeSlideAccelTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySlopeSlideMinSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyWallRunSideSwitchAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyWallRunDownSwitchAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyWallRunSideMoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverFindLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverMoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverSlideTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverSlideSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float m_CoverSlideMinSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverSlideBreak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverSlideMutekiTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverCommandRreadyTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverSlideSlowRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverSlideSlowTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverShotSlideTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverShotSlideSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float m_CoverShotSlideMinSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverShotSlideBreak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverShotMutekiTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverShotSlideHomingRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverShotLockonLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCoverShotLockonSightMoveRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyCommandCoolDownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAirSlideCoolDownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAirGuardCoolDownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAntiFormCoolDownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyReactionCoolDownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyDamageEndCancelTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyGuardHoldTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyGuardMoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAutoLockonLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAutoLockonNear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyManualLockonLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyManualLockonOff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyShootLockonLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAthleticLockonLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAthleticLockonRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool MySonicAttackModeB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyStylePointMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyStylePointAddRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyStylePointAddRateLv0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyStylePointAddRateLv1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyStylePointAddRateLv2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool MyAntiFormGenerate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float CriticalModeStylePointAddRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float CriticalModeStylePointAddRateLv0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float CriticalModeStylePointAddRateLv1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float CriticalModeStylePointAddRateLv2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float CriticalModeAntiFormGenerateRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float CriticalModeJustGuardTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float CriticalChargeStylePointAddRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool MyStylePointAddWithoutHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyStylePointDecStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyStylePointDecInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyStylePointDec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyStyleFinishOffsetTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyStyleFinishOffsetTimeWeaponChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyFriendPointMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFriendPointTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyAttractionPointMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyFocusPointAddHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyFocusPointAddTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFocusPointAddInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFocusPointConvertRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyFocusPointNeedAF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFocusAspirRateLv1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFocusAspirRateLv2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFocusAspirRateLv3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyFpChargeAddTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFpChargeInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAthleticSlideTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAthleticSlideSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAthleticSlideKickAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAthleticAttackSlowRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyAthleticAttackSlowTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimSurfaceBuoyancy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimSurfaceSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDiveLowSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDiveHighSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDiveDiveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDiveRiseSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDashSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDashTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDiveOxygenTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDiveDashOxygenConsumeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDiveDashDisableInputTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDivingHighSpeedMoveRotSpeedYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MySwimDivingHighSpeedMoveRotSpeedPitch;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	//class ATresCameraDiving* m_pSwimDivingCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	TEnumAsByte<ETresPlayerFlyModes> MyFlyMotion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	TEnumAsByte<ETresPlayerJumpModes> MyJumpMotion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool bDispDebugInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool bDispNetDebugInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool bDebugDisableGameOver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bAlwaysEnableWallRun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugWallRunStartOff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugDisableFriend;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugShooterModeInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bWallTurnWithoutAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int m_bDebugHighJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebug2ndJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugDodge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAirDodge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugRiskDodge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugSuperJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int m_bDebugSuperSlideLv;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugPoleSpin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugPoleSwing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugWallKick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugEnemyTurn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAirRecovery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugBlowCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAirRecoveryInputChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugGuard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugGuardCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugRevengeImpact;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugRevengeDive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugRevengeEx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugDodgeCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugComboMaster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int m_bDebugComboPlus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int m_bDebugAirComboPlus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugFinTriple;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugFinThrust;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugFinFlash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugFinDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugLaunchSpin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAirRollBeat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugFinDonald1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugFinDonald2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugFinDonald3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugFinGoofy1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugFinGoofy2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugSonicSlash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugSonicJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugSonicTurn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugSonicWheel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAttractionVS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAttractionBM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAttractionSM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAttractionSC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAttractionMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAttractionTC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAttractionAS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAttractionWS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugAttractionFF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugShieldAutoGrowUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugMpCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugFpCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugChargeBerserkTest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugCuragan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float m_fDebugAttackMoveLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugForceUseSpawnPointVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugDispNearSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int m_nDebugTestMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	FVector m_vDebugTmpVec0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	FVector m_vDebugTmpVec1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	FVector m_vDebugTmpVec2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UClass* m_AthleticRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bFriendDisableAutoCreate;

	//ESQEX_AI_ThinkType m_FriendAIThinkType;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	//struct FTresAttractionFlowAssetInfo m_AttractionFlowAssetInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	TArray<float> m_AttractionFlowDrawingHistoryRatio;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	//class UTresPlayerPawnLoadAsset* m_LoadAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int m_GameStartChrLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bEnableWeaponChangeEquip;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	//class UTresAnimSet* m_RestrictWeaponModeAnimSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFriendComboFinishRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFriendComboFinishRangeHalf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyFriendComboFinishRangeNear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyFriendComboFinishAddRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyFriendComboFinishAddRateRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyFriendComboFinishAddRateRangeHalf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	int MyFriendComboFinishAddRateRangeNear;

	UPROPERTY(BlueprintAssignable)
	FTresPlayerSpecificAction OnPlayerSpecificAction;

	UPROPERTY(BlueprintAssignable)
	FTresActorSpecificAction OnActorSpecificAction;

	UPROPERTY(BlueprintAssignable)
	FTresPlayerBeginCommandAction OnPlayerBeginCommandAction;

	UPROPERTY(BlueprintAssignable)
	FTresPlayerEndCommandAction OnPlayerEndCommandAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pFireEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pHopEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pPoleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pPoleEffectH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pWallRunEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pSprintEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pAthleticHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UClass* m_LensEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pFocusAspirEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pSwanDiveEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pGuardReflectEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pJustGuardEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pCriticalCounterHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystem* m_pCoverShotDestroyEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class USQEX_ParticleAttachDataAsset* m_AntiFormEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyDarkScreenRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	bool m_bDebugHitStop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyHitStopTimeSmall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	float MyHitStopTimeBig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	TArray<class AActor*> m_OverlappedAttractionFlowDrawingActors;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	//class UTresSpawnPointDistanceScorer* m_pSpawnPointDistanceScorer;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	//class UTresSpawnPointAvoidActorFilter* m_pSpawnPointFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	TEnumAsByte<ETresPlayerUniqueID> m_PlayerUniqueID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnBase")
	class UParticleSystemComponent* m_pDeathSentenceCountEffect;

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void RequestEndCommandKind(TEnumAsByte<ETresCommandKind> inCommand, int InParam0) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	bool RemotePlayerStateEvent(const FName& EventName, class AActor* inActor) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void ReceivePlayerSpecificAction(TEnumAsByte<ETresPlayerSpecificActionID> ActionID, int SubID) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void ReceivePlayerEndCommandAction(TEnumAsByte<ETresCommandKind> CommandKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void ReceivePlayerBeginCommandAction(TEnumAsByte<ETresCommandKind> CommandKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void NotifySpecificActionAccompanyPawn(int ID, int Param0, int Param1, int Param2) {};

	UFUNCTION(BlueprintPure, Category = "TresPlayerPawnBase")
	FVector GetSpecificActionTargetPos(int ID) { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresPlayerPawnBase")
	class ATresCharPawnBase* GetSpecificActionAccompanyPawn(int ID) { return nullptr; };

	//UFUNCTION(BlueprintPure, Category = "TresPlayerPawnBase")
	//class UTresPlayerStateEvent* GetPlayerStateEventByName(const FName& Name) { return nullptr; };

	//UFUNCTION(BlueprintPure, Category = "TresPlayerPawnBase")
	//class UTresPlayerStateEvent* GetPlayerStateEvent(int Idx) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresPlayerPawnBase")
	class UTresFriendComponent* GetFriendManager() { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugWarpCheck(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetVikingShipParam(float fIdlePitch, float fIdlePow, float fIdleAcc, float fIdleBrk, float fAtkPitch, float fAtkPow, float fAtkAcc, float fAtkBrk) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetTmpVector(int InSlot, float InX, float InY, float InZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetRailSlideShotMax(int InMax) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetRailSlideShotInterval(float InTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetRailSlideCheckRange(float InRange, float InAirRange) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetInputCancel(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetHitStopTime(int InMode, float Timer) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetGuardMoveSpeed(float InSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetGuardHoldTime(float InTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetGuardEnableDisp(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetGlideParam(int bEnable, float InGravityScale, float InSpeed, float InTurnRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetFriendComboFinishParam(float InRange, float InRangeHalf, float InRangeNear, int InAddRate, int InAddRateRange, int InAddRateRangeHalf, int InAddRateRangeNear) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetFocusAspirRate(float fAspirLv1, float fAspirLv2, float fAspirLv3) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetFloatingMode(bool bEnable, bool IsSpecial, float InGravityScale, float InSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetDiveFallLockon(float InRangeXY, float InLimitZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetCoverSlowParam(float InRate, float InTeme) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetCoverMoveSpeed(float InSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetCoverFindLimit(float InLimit) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetComboTimeDisp(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetClimbingParam(int InVersion, float InRadius, float InFront, float InFrontF, float InFrontN, float InFinalSpace, float InBottom) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugSetClimbingBodyOff() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugResetTmpVector() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugPlayerFallIntoBottomlessPit(float Z) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugEnableSkillCamera(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugEnableDamageAlwaysHeavy(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugEnableDamageAddVelocity(float InPow) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugCuragan(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugChangeWeaponType(int InType) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugChangePlayerWeaponEquip(int InSlotIndex, int InWeaponItemID) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void DebugBurnTest(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void BP_SetWaterFlowAngle(float fWaterFlowAngle) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void BP_SetForceWalkSpeed(float fForceWalkSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void BP_SetEnableShootLockModeForRIKU(bool IsOn) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void BP_SetEnableGuardHitBackControl(bool IsOn) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void BP_SetDisableWallRunPointDispOff(bool inSw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void BP_SetDisableWallRunPointDisp(bool inSw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void BP_SetDisablePolePointDisp(bool inSw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void BP_SetDisableHopPointDisp(bool inSw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	void BP_SetDisableFreeRunPointDisp(bool inSw) {};

	//UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	//bool BP_NotifyForcedStartSnowCurling(class UTresUICommandInfoBase* pUICommandInfo) { return false; };

	//UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	//bool BP_NotifyForcedStartSnowChase(class UTresUICommandInfoBase* pUICommandInfo) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnBase")
	bool BP_NotifyForcedStartDiveFall() { return false; };
};
