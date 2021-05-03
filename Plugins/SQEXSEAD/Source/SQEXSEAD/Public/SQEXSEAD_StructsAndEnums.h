// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SQEXSEAD_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

UENUM(BlueprintType)
enum class ESQEXSEADChangeAutoSeEnableNotifyEndBehavior : uint8
{
	RevertState = 0,
	SetInvertedState = 1,
	NoAction = 2,
	ESQEXSEADChangeAutoSeEnableNotifyEndBehavior_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADANPlayAutoSeSourceType
{
	ESQEXSEADANPlayAutoSeSourceType_MotionSoundType = 0,
	ESQEXSEADANPlayAutoSeSourceType_AuxSurfaceTable = 1,
	ESQEXSEADANPlayAutoSeSourceType_SurfaceTableAsset = 2,
	ESQEXSEADANPlayAutoSeSourceType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADAutoSeComponentAssetTableNonSurface
{
	ESQEXSEADAutoSeComponentAssetTableNonSurface_RustleShort = 0,
	ESQEXSEADAutoSeComponentAssetTableNonSurface_RustleLong = 1,
	ESQEXSEADAutoSeComponentAssetTableNonSurface_RustleFootShort = 2,
	ESQEXSEADAutoSeComponentAssetTableNonSurface_RustleFootLong = 3,
	ESQEXSEADAutoSeComponentAssetTableNonSurface_WingFlapUp = 4,
	ESQEXSEADAutoSeComponentAssetTableNonSurface_WingFlapDown = 5,
	ESQEXSEADAutoSeComponentAssetTableNonSurface_SwingKnock = 6,
	ESQEXSEADAutoSeComponentAssetTableNonSurface_SwingRub = 7,
	ESQEXSEADAutoSeComponentAssetTableNonSurface_CrouchDown = 8,
	ESQEXSEADAutoSeComponentAssetTableNonSurface_StandUp = 9,
	ESQEXSEADAutoSeComponentAssetTableNonSurface_1_MAX = 10 UMETA(Hidden),
	ESQEXSEADAutoSeComponentAssetTableNonSurface_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADAutoSeComponentAssetTablePerSurface
{
	ESQEXSEADAutoSeComponentAssetTablePerSurface_Walk = 0,
	ESQEXSEADAutoSeComponentAssetTablePerSurface_Run = 1,
	ESQEXSEADAutoSeComponentAssetTablePerSurface_Jump = 2,
	ESQEXSEADAutoSeComponentAssetTablePerSurface_LandNormal = 3,
	ESQEXSEADAutoSeComponentAssetTablePerSurface_LandHard = 4,
	ESQEXSEADAutoSeComponentAssetTablePerSurface_FootShuffle = 5,
	ESQEXSEADAutoSeComponentAssetTablePerSurface_1_MAX = 6 UMETA(Hidden),
	ESQEXSEADAutoSeComponentAssetTablePerSurface_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADAutoSeResult
{
	ESQEXSEADAutoSeResult_Success = 0,
	ESQEXSEADAutoSeResult_Failure = 1,
	ESQEXSEADAutoSeResult_Error_InvalidArgs = 2,
	ESQEXSEADAutoSeResult_Error_InvalidBoneName = 3,
	ESQEXSEADAutoSeResult_Error_NotAllSocketsValid = 4,
	ESQEXSEADAutoSeResult_Error_FailedToCreateProc = 5,
	ESQEXSEADAutoSeResult_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADAutoSePartsType
{
	ESQEXSEADAutoSePartsType_Invalid = 0,
	ESQEXSEADAutoSePartsType_Foot_Default = 1,
	ESQEXSEADAutoSePartsType_Arm_Default = 2,
	ESQEXSEADAutoSePartsType_Wing_Default = 3,
	ESQEXSEADAutoSePartsType_Swing_Default = 4,
	ESQEXSEADAutoSePartsType_Body_Default = 5,
	ESQEXSEADAutoSePartsType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADAutoSeMotionSoundType
{
	ESQEXSEADAutoSeMotionSoundType_None = 0,
	ESQEXSEADAutoSeMotionSoundType_Walk = 1,
	ESQEXSEADAutoSeMotionSoundType_Run = 2,
	ESQEXSEADAutoSeMotionSoundType_Jump = 3,
	ESQEXSEADAutoSeMotionSoundType_LandNormal = 4,
	ESQEXSEADAutoSeMotionSoundType_LandHard = 5,
	ESQEXSEADAutoSeMotionSoundType_FootShuffle = 6,
	ESQEXSEADAutoSeMotionSoundType_RustleShort = 7,
	ESQEXSEADAutoSeMotionSoundType_RustleLong = 8,
	ESQEXSEADAutoSeMotionSoundType_RustleFootShort = 9,
	ESQEXSEADAutoSeMotionSoundType_RustleFootLong = 10,
	ESQEXSEADAutoSeMotionSoundType_WingFlapUp = 11,
	ESQEXSEADAutoSeMotionSoundType_WingFlapDown = 12,
	ESQEXSEADAutoSeMotionSoundType_SwingKnock = 13,
	ESQEXSEADAutoSeMotionSoundType_SwingRub = 14,
	ESQEXSEADAutoSeMotionSoundType_CrouchDown = 15,
	ESQEXSEADAutoSeMotionSoundType_StandUp = 16,
	ESQEXSEADAutoSeMotionSoundType_MAX = 17 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEAD_BGMLoadState
{
	ESQEXSEAD_BGMLoadState_Invalid = 0,
	ESQEXSEAD_BGMLoadState_NotLoaded = 1,
	ESQEXSEAD_BGMLoadState_Loading = 2,
	ESQEXSEAD_BGMLoadState_Valid = 3,
	ESQEXSEAD_BGMLoadState_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEXSEAD_BGMStopBehaviour : uint8
{
	Stop = 0,
	Reset = 1,
	ESQEXSEAD_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEXSEAD_BGMStoreBehaviour : uint8
{
	Stop = 0,
	AutoPlay = 1,
	Suspend = 2,
	AutoResume = 3,
	ESQEXSEAD_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEXSEAD_BGMState : uint8
{
	Invalid = 0,
	Ready = 1,
	AutoPlay = 2,
	Playing = 3,
	Finished = 4,
	Stop = 5,
	Suspended = 6,
	AutoResume = 7,
	ESQEXSEAD_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADCategoryVolumeLayers
{
	ESQEXSEADCategoryVolumeLayers_Debug = 0,
	ESQEXSEADCategoryVolumeLayers_Game = 1,
	ESQEXSEADCategoryVolumeLayers_Config = 2,
	ESQEXSEADCategoryVolumeLayers_Menu = 3,
	ESQEXSEADCategoryVolumeLayers_Event = 4,
	ESQEXSEADCategoryVolumeLayers_Slow = 5,
	ESQEXSEADCategoryVolumeLayers_Matinee = 6,
	ESQEXSEADCategoryVolumeLayers_1_MAX = 7 UMETA(Hidden),
	ESQEXSEADCategoryVolumeLayers_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADBGMControlTypes
{
	ESQEXSEADBGMControlTypes_NONE = 0,
	ESQEXSEADBGMControlTypes_PLAY = 1,
	ESQEXSEADBGMControlTypes_STOP = 2,
	ESQEXSEADBGMControlTypes_RESET = 3,
	ESQEXSEADBGMControlTypes_SETSILENT = 4,
	ESQEXSEADBGMControlTypes_SETSECTION = 5,
	ESQEXSEADBGMControlTypes_SETMODE = 6,
	ESQEXSEADBGMControlTypes_SETPATHPLAY = 7,
	ESQEXSEADBGMControlTypes_READY = 8,
	ESQEXSEADBGMControlTypes_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADLayoutType
{
	ESQEXSEADLayoutType_Point = 0,
	ESQEXSEADLayoutType_Line = 1,
	ESQEXSEADLayoutType_Box = 2,
	ESQEXSEADLayoutType_Polyline = 3,
	ESQEXSEADLayoutType_Quadrilateral = 4,
	ESQEXSEADLayoutType_TriangleStrip = 5,
	ESQEXSEADLayoutType_TriangleFan = 6,
	ESQEXSEADLayoutType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADLayoutObstructionType
{
	ESQEXSEADLayoutObstructionType_Board = 0,
	ESQEXSEADLayoutObstructionType_Box = 1,
	ESQEXSEADLayoutObstructionType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADSoundOutputPort
{
	ESQEXSEADSoundOutputPort_AUTO = 0,
	ESQEXSEADSoundOutputPort_MAIN = 1,
	ESQEXSEADSoundOutputPort_RESTRICTED = 2,
	ESQEXSEADSoundOutputPort_PAD1 = 3,
	ESQEXSEADSoundOutputPort_MAIN_PAD1 = 4,
	ESQEXSEADSoundOutputPort_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADAudioStartTimings
{
	ESQEXSEADAudioStartTimings_None = 0,
	ESQEXSEADAudioStartTimings_OnBeginPlay = 1,
	ESQEXSEADAudioStartTimings_OnZeroOneValueVariable = 2,
	ESQEXSEADAudioStartTimings_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADZeroOneProperties
{
	ESQEXSEADZeroOneProperties_None = 0,
	ESQEXSEADZeroOneProperties_Velocity = 1,
	ESQEXSEADZeroOneProperties_RotationalVelocity = 2,
	ESQEXSEADZeroOneProperties_VelocityFromLocation = 3,
	ESQEXSEADZeroOneProperties_MAX = 4 UMETA(Hidden)
};

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct FSQEXSEADBGMControlTrackKey
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADBGMControlTrackKey")
	float Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADBGMControlTrackKey")
	TEnumAsByte<ESQEXSEADBGMControlTypes> ControlType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADBGMControlTrackKey")
	FName SlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADBGMControlTrackKey")
	int SectionIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADBGMControlTrackKey")
	int ModeIndex;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAnimNotifyPlayAutoSeParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	TEnumAsByte<ESQEXSEADANPlayAutoSeSourceType> SourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	TEnumAsByte<ESQEXSEADAutoSeMotionSoundType> MotionSoundType;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	//class USQEXSEADSurfaceAssetReferenceTable* SurfaceAssetPathTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	FName SurfaceAssetTableRecordName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	TEnumAsByte<ESQEXSEADAutoSePartsType> AutoSePartsType;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	//unsigned char AutoSePartsIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	bool bCheckIsGrounded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	bool bAttachToParts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	float SoundVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	float SoundPitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	bool bFollowOwnerVisible;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeAssetLoaderAssets
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAssetLoaderAssets")
	TArray<class USoundBase*> Assets;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentAssetTablePerSurface
{
	GENERATED_BODY()
public:
	UPROPERTY()
	struct FStringAssetReference SoundAssetPaths[0x6];
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentAssetTableNonSurface
{
	GENERATED_BODY()
public:
	UPROPERTY()
	struct FStringAssetReference SoundAssetPaths[0xA];
};

USTRUCT(BlueprintType)
struct FSQEXSEADSurfaceAssetReferenceRecord
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSurfaceAssetReferenceRecord")
	FName Name;

	UPROPERTY()
	struct FStringAssetReference AssetRefs[0x3F];
};

USTRUCT(BlueprintType)
struct FSQEXSEADSurfaceAssetReferenceTableData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSurfaceAssetReferenceTableData")
	TArray<struct FSQEXSEADSurfaceAssetReferenceRecord> Records;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentFootInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentFootInitParams")
	FName FemurName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentFootInitParams")
	FName TibiaName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentFootInitParams")
	FName FootName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentFootInitParams")
	FName HeelName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentFootInitParams")
	FName ToeName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentArmInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentArmInitParams")
	FName ShoulderName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentArmInitParams")
	FName ElbowName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentWingInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentWingInitParams")
	FName WingRootName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentWingInitParams")
	FName WingEdgeName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentSwingInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentSwingInitParams")
	TArray<FName> ChainNodeNames;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentBodyInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentBodyInitParams")
	FName BaseName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentBodyInitParams")
	FName WaistName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	TArray<struct FSQEXSEADAutoSeComponentFootInitParams> Feet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	TArray<struct FSQEXSEADAutoSeComponentArmInitParams> Arms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	TArray<struct FSQEXSEADAutoSeComponentWingInitParams> Wings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	TArray<struct FSQEXSEADAutoSeComponentSwingInitParams> Swings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	struct FSQEXSEADAutoSeComponentBodyInitParams Body;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	float AutoCalcHeelRatio;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeAnalyzerSetting
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	bool bOverrideAssumeFootMotionlessMoveLenInWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	float AssumeFootMotionlessMoveLenInWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	bool bOverrideAssumeBodyRunngingVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	float AssumeBodyRunngingVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	bool bOverrideAutoCalcFootGroundedThresholdRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	float AutoCalcFootGroundedThresholdRatio;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeDetectorSettingFootStep
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingFootStep")
	bool bOverrideFootShuffleAssumeBodyStopVelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingFootStep")
	float FootShuffleAssumeBodyStopVelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingFootStep")
	bool bOverrideFootShuffleDetectFootAccelThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingFootStep")
	float FootShuffleDetectFootAccelThreshold;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeDetectorSettingRustle
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	bool bOverrideElbowRustleVolumeRangesWalk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleVolumeRangeWalkMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleVolumeRangeWalkMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	bool bOverrideElbowRustleVolumeRangesRun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleRelativeVelocityForNmlVolumeRangeRunMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleRelativeVelocityForNmlVolumeRangeRunMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleVolumeRangeRunMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleVolumeRangeRunMax;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeDetectorSettingSwing
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingSwing")
	bool bOverrideKnockDetectVelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingSwing")
	float KnockDetectVelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingSwing")
	bool bOverrideRubDetectVelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingSwing")
	float RubDetectVelocityThreshold;
};

USTRUCT(BlueprintType)
struct FSQEXSEAD_BGMOptions
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	int Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	ESQEXSEAD_BGMStoreBehaviour StoreBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	ESQEXSEAD_BGMStopBehaviour StopBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	float PlayFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	float ResumeFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	float SuspendFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	float StopFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	float StaySuspendTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	bool bUnreferenceAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	bool bRestoreAfterFinish;
};

USTRUCT(BlueprintType)
struct FSQEXSEAD_BGMSlotSetting
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMSlotSetting")
	FName SlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMSlotSetting")
	struct FSQEXSEAD_BGMOptions SlotOption;
};

USTRUCT(BlueprintType)
struct FSQEXSEAD_Timing
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeControlTrackKey
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	float Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseGlobalEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bGlobalEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseVolumeScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	float VolumeScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseDisableAnimNotifyPlayAutoSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bDisableAnimNotifyPlayAutoSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseEnableForceOverridePhysicalSurface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bEnableForceOverridePhysicalSurface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	TEnumAsByte<EPhysicalSurface> PhysicalSurfaceForForceOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseAssumeFootMotionlessMoveLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	float AssumeFootMotionlessMoveLength;
};

USTRUCT(BlueprintType)
struct FSQEXSEADEventTrackKey
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADEventTrackKey")
	float Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADEventTrackKey")
	FName EventName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADLayoutInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	TEnumAsByte<ESQEXSEADLayoutType> LayoutType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	float InnerRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	float OuterRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	float OcclusionLPF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	float OcclusionVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	TArray<FVector> LayoutPointLocations;
};

USTRUCT(BlueprintType)
struct FSQEXSEADLayoutObstructionInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutObstructionInfo")
	TEnumAsByte<ESQEXSEADLayoutObstructionType> ObstructionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutObstructionInfo")
	TArray<FVector> ObstructionPointLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutObstructionInfo")
	TArray<class AStaticMeshActor*> LinkedMeshActorList;
};

USTRUCT(BlueprintType)
struct FSQEXSEADSoundReference
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundReference")
	class USoundBase* Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundReference")
	bool bFollow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundReference")
	FName AttachPointName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADVolumeInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FSQEXSEADSoundAttachedInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FSQEXSEAD_BGMLocalOptions
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FSQEXSEADSystemPerformanceInfo
{
	GENERATED_BODY()
};





//CUSTOM MAB/SAB STUFF

struct FSabMabHeaderChunk
{
	uint32 ID;
	uint8 VersionMain;
	uint8 VersionSub;
	uint16 Unknown;
	uint8 SectionsCount;
	uint8 DescriptorLength;
	uint16 Unknown2;
	uint32 FileSize;
};

struct FSabMabHeaderSection
{
	uint32 SectionName;
	uint16 UnknownAt4;
	uint16 UnknownAt6;
	uint32 OffsetInInnerFile;
	uint32 UnknownAtC;
};

struct FSabMabMaterialChunk
{
	uint16 SectionSize;
	uint16 NumEntries;	//Amount of songs in the Mab/Sab
};

struct FSabMabSongHeader
{
	uint8 ChannelCount;
	uint8 Codec;
	uint16 MtrlNumber;
	uint32 SampleRate;
	uint32 LoopStart;
	uint32 LoopEnd;
	uint32 ExtraDataSize;
	uint32 StreamSize;
	uint16 extraDataID;
};

struct FSabMabSongHeaderPosition
{
	uint32 SongPosition;
};

struct FSabMabHCAHeader
{
	uint32 HCAName;
	uint16 HCAVersion;
	uint16 HCAHeaderSize;
	uint32 AudioType;
	uint8 HCAChannelCount;
	uint16 SampleRate; //(int) reader.ReadByte() << 16 | (int) reader.ReadUInt16();
	uint32 FrameCount;
	uint16 InsertedSamples;
	uint16 AppendedSamples;
};



struct FHCACompChunk
{
	uint16 HCAComp_FrameSize;
	uint8 HCAComp_MinResolution;
	uint8 HCAComp_MaxResolution;
	uint8 HCAComp_TrackCount;
	uint8 HCAComp_ChannelConfig;
	uint8 HCAComp_TotalBandCount;
	uint8 HCAComp_BaseBandCount;
	uint8 HCAComp_StereoBandCount;
	uint8 HCAComp_BandsPerHfrGroup;
	uint8 HCAComp_Reserved1;
	uint8 HCAComp_Reserved2;
};



struct FHCAFormat
{
	//FMT
	uint8 ChannelCount;
	int SampleRate;
	uint32 FrameCount;
	uint16 InsertedSamples;
	uint16 AppendedSamples;
	int SampleCount;

	//Comp
	uint16 FrameSize;
	uint8 MinResolution;
	uint8 MaxResolution;
	uint8 TrackCount;
	uint8 ChannelConfig;
	uint8 TotalBandCount;
	uint8 BaseBandCount;
	uint8 StereoBandCount;
	uint8 BandsPerHfrGroup;

	//Ciph
	uint16 EncryptionType;

	//Loop
	bool bLooping = true;
	uint32 LoopStartFrame;
	uint32 LoopEndFrame;
	uint16 PreLoopSamples;
	uint16 PostLoopSamples;
	int LoopSampleCount;
};



#define UE_MAKEFOURCC(ch0, ch1, ch2, ch3)\
	((uint32)(uint8)(ch0) | ((uint32)(uint8)(ch1) << 8) |\
	((uint32)(uint8)(ch2) << 16) | ((uint32)(uint8)(ch3) << 24 ))

#define UE_mmioFOURCC(ch0, ch1, ch2, ch3)\
	UE_MAKEFOURCC(ch0, ch1, ch2, ch3)

#define UE_MAKETHREECC(ch0, ch1, ch2)\
	((uint32)(uint8)(ch0) | ((uint32)(uint8)(ch1) << 8) |\
	((uint32)(uint8)(ch2) << 16))

#define UE_mmioTHREECC(ch0, ch1, ch2)\
	UE_MAKETHREECC(ch0, ch1, ch2)

struct FSabMabInfo
{
public:
	bool pIsSab;
	const uint32* pFileFormat;
	const uint8* pVersionMain;
	const uint8* pVersionSub;


	const uint32* pSamplesPerSec;
	const uint32* pAvgBytesPerSec;
	const uint16* pBlockAlign;
	const uint16* pBitsPerSample;
	const uint16* pChannels;
	const uint16* pFormatTag;

	const uint32* pSabMabDataSize;
	const uint32* pMasterSize;
	const uint8*  SampleDataStart;
	const uint8*  SampleDataEnd;
	uint32  SampleDataSize;

	uint8 ChannelAmount;

	uint16 HeaderSize;

	bool bIsLooping;

	const uint8*  SabMabDataEnd;

	FHCAFormat* HCAFormat;

	uint8 BytesToUint8(const uint8* Data, int index)
	{
		uint8 value = 0;
		value |= Data[index];
		return value;
	}
	uint16 BytesToUint16(const uint8* Data, int index)
	{
		uint32 value = 0;
		value |= Data[index + 1] << 8;
		value |= Data[index];
		return value;
	}
	uint32 BytesToUint32(const uint8* Data, int index)
	{
		uint32 value = 0;
		value |= Data[index + 3] << 24;
		value |= Data[index + 2] << 16;
		value |= Data[index + 1] << 8;
		value |= Data[index];
		return value;
	}

	FString Uint32ToString(uint32 Input)
	{
		/*uint8* InputArray = 0;
		InputArray[0] = Input >> 24;
		InputArray[1] = Input >> 16;
		InputArray[2] = Input >> 8;
		InputArray[3] = Input;*/
		//return BytesToString(InputArray, 4);
		return "";
	}

	size_t bytes_to_samples(size_t bytes, int channels, int bits_per_sample)
	{
		if (channels <= 0 || bits_per_sample <= 0) return 0;
		return ((int64_t)bytes * 8) / channels / bits_per_sample;
	}

	bool ReadSabMabInfo(const uint8* SabMabData, int32 SabMabDataSize, FString* ErrorMessage = NULL, bool InHeaderDataOnly = false, void** OutFormatHeader = NULL)
	{
		FSabMabHeaderChunk* SabMabHeader = (FSabMabHeaderChunk*)SabMabData;
		SabMabDataEnd = SabMabData + SabMabDataSize;

		if (SabMabDataSize == 0) { return false; }

		//Commented out because it keepts setting Sab to true
		/*if ((SabMabHeader->ID != (UE_mmioFOURCC('m', 'a', 'b', 'f'))) && (SabMabHeader->ID != (UE_mmioFOURCC('f', 'b', 'a', 'm'))))
		{
			if ((SabMabHeader->ID != (UE_mmioFOURCC('s', 'a', 'b', 'f'))) && (SabMabHeader->ID != (UE_mmioFOURCC('f', 'b', 'a', 's'))))
			{
				if (ErrorMessage) { *ErrorMessage = TEXT("Invalid Sab/Mab file."); }
				return false;
			}
			else
			{
				pIsSab = true;
			}
		}*/

		int HeaderSize = 16 + SabMabHeader->DescriptorLength + (16 - SabMabHeader->DescriptorLength) % 16;	//32 is the header size

		for (int i = 0; i < SabMabHeader->SectionsCount; i++)
		{
			FSabMabHeaderSection* HeaderSection = (FSabMabHeaderSection*)&SabMabData[HeaderSize + 16 * i];
			if (HeaderSection->SectionName == UE_mmioFOURCC('m', 't', 'r', 'l'))
			{
				FSabMabMaterialChunk* MabMaterialChunk = (FSabMabMaterialChunk*)&SabMabData[HeaderSection->OffsetInInnerFile + 2];
				pChannels = &MabMaterialChunk->NumEntries;
				for (int i = 0; i < MabMaterialChunk->NumEntries; i++)
				{
					FSabMabSongHeaderPosition* SongHeaderPosition = (FSabMabSongHeaderPosition*)&SabMabData[HeaderSection->OffsetInInnerFile + MabMaterialChunk->SectionSize + i * 4]; //Should be 704
					FSabMabSongHeader* MabSongHeader = (FSabMabSongHeader*)&SabMabData[HeaderSection->OffsetInInnerFile + SongHeaderPosition->SongPosition + 4];
					FSabMabHCAHeader* MabHCAHeader = (FSabMabHCAHeader*)&SabMabData[HeaderSection->OffsetInInnerFile + SongHeaderPosition->SongPosition + 48];
					
					//THIS IS ALL EXPERIMENTAL
						int HCAHeaderPosition = HeaderSection->OffsetInInnerFile + SongHeaderPosition->SongPosition + 48;
						int HCAInitialOffset = HeaderSection->OffsetInInnerFile + SongHeaderPosition->SongPosition + 52;
						int HCAAudioType = HCAHeaderPosition + 4;

						while (HCAInitialOffset < MabHCAHeader->HCAHeaderSize)
						{
							uint32 AudioType = BytesToUint32(SabMabData, HCAInitialOffset);	//Outputs - fmt\0
							HCAInitialOffset = MabHCAHeader->HCAHeaderSize;
							switch (AudioType)
							{
								case UE_mmioFOURCC('c', 'i', 'p', 'h'):
									HCAFormat->EncryptionType = BytesToUint16(SabMabData, HCAInitialOffset);
									HCAInitialOffset += 4;
									continue;
								case UE_mmioFOURCC('c', 'o', 'm', 'p'):
									HCAFormat->FrameSize = BytesToUint16(SabMabData, HCAInitialOffset);
									HCAFormat->MinResolution = BytesToUint8(SabMabData, HCAInitialOffset);
									HCAFormat->MaxResolution = BytesToUint8(SabMabData, HCAInitialOffset);
									HCAFormat->TrackCount = BytesToUint8(SabMabData, HCAInitialOffset);
									HCAFormat->ChannelConfig = BytesToUint8(SabMabData, HCAInitialOffset);
									HCAFormat->TotalBandCount = BytesToUint8(SabMabData, HCAInitialOffset);
									HCAFormat->BaseBandCount = BytesToUint8(SabMabData, HCAInitialOffset);
									HCAFormat->BandsPerHfrGroup = BytesToUint8(SabMabData, HCAInitialOffset);
									HCAInitialOffset += 18;
									continue;
								case UE_mmioFOURCC('f', 'm', 't', '\0'):
									HCAFormat->ChannelCount = BytesToUint8(SabMabData, HCAInitialOffset);
									HCAFormat->SampleRate = (int)BytesToUint8(SabMabData, HCAInitialOffset) << 16 | (int)BytesToUint16(SabMabData, HCAInitialOffset);
									HCAFormat->FrameCount = BytesToUint32(SabMabData, HCAInitialOffset);
									HCAFormat->InsertedSamples = BytesToUint16(SabMabData, HCAInitialOffset);
									HCAFormat->AppendedSamples = BytesToUint16(SabMabData, HCAInitialOffset);
									HCAFormat->SampleCount = HCAFormat->FrameCount * 1024 - HCAFormat->InsertedSamples - HCAFormat->AppendedSamples;
									HCAInitialOffset += 20;
									continue;
								case UE_mmioFOURCC('l', 'o', 'o', 'p'):
									HCAFormat->LoopStartFrame = BytesToUint32(SabMabData, HCAInitialOffset);
									HCAFormat->LoopEndFrame = BytesToUint32(SabMabData, HCAInitialOffset);
									HCAFormat->PreLoopSamples = BytesToUint16(SabMabData, HCAInitialOffset);
									HCAFormat->PostLoopSamples = BytesToUint16(SabMabData, HCAInitialOffset);
									HCAFormat->LoopSampleCount;
									HCAInitialOffset += 24;
									continue;
								case UE_mmioFOURCC('p', 'a', 'd', '\0'):
									HCAInitialOffset = MabHCAHeader->HCAHeaderSize;
									continue;
								default:
									//*ErrorMessage = TEXT("CHUNK NOT SUPPORTED %s"), (int)MabHCAHeader->AudioType;
									//*ErrorMessage = TEXT("CHUNK NOT SUPPORTED %s"), Uint32ToString(MabHCAHeader->AudioType);
									continue;
							}
						}
					
					bIsLooping = MabSongHeader->LoopEnd > 0;

					//Chcobo is 1536kbps
					//Length is 02:46 (in ue4 it is 166.629974)
					//Filesize in ue4 is 2,576kb

					pBitsPerSample = (uint16*)&MabSongHeader->LoopStart; //Probably not this
					//pBitsPerSample = (uint16*)16;
					//pSabMabDataSize = &MabSongHeader->StreamSize; //Probably not this

					HeaderSize = MabHCAHeader->HCAHeaderSize;

					SampleDataSize = bytes_to_samples(MabSongHeader->StreamSize, MabSongHeader->ChannelCount, 16);

					pSamplesPerSec = &MabSongHeader->SampleRate;
				}
			}
		}

		//SAMPLE COUNT
		//structure.Hca.SampleCount = structure.Hca.FrameCount * 1024 - structure.Hca.InsertedSamples - structure.Hca.AppendedSamples;

		pFileFormat = &SabMabHeader->ID;
		pVersionMain = &SabMabHeader->VersionMain;
		pVersionSub = &SabMabHeader->VersionSub;
		return true;
	}
};