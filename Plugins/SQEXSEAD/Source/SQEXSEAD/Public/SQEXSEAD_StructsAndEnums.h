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
static uint8 BytesToUint8(const uint8* Data, int& Buffer)
{
	uint8 value = 0;
	value |= Data[Buffer];
	Buffer++;
	return value;
}
static uint16 BytesToUint16(const uint8* Data, int& Buffer, bool bIsBigEndian)
{
	uint32 value = 0;
	if (bIsBigEndian)
	{
		value |= Data[Buffer + 1];
		value |= Data[Buffer] << 8;
	}
	else
	{
		value |= Data[Buffer + 1] << 8;
		value |= Data[Buffer];
	}
	Buffer += 2;
	return value;
}
static uint32 BytesToUint32(const uint8* Data, int& Buffer, bool bIsBigEndian)
{
	uint32 value = 0;
	if (bIsBigEndian)
	{
		value |= Data[Buffer + 3];
		value |= Data[Buffer + 2] << 8;
		value |= Data[Buffer + 1] << 16;
		value |= Data[Buffer] << 24;
	}
	else
	{
		value |= Data[Buffer + 3] << 24;
		value |= Data[Buffer + 2] << 16;
		value |= Data[Buffer + 1] << 8;
		value |= Data[Buffer];
	}
	Buffer += 4;
	return value;
}
static FString Uint8ToString(uint8 Input)
{
	uint8 Byte1 = Input;
	FString CombinedString = BytesToString(&Byte1, 1);
	CombinedString[0] = CombinedString[0] - 1;
	return CombinedString;
}
static FString Uint16ToString(uint16 Input)
{
	uint8 Byte1 = Input;
	uint8 Byte2 = Input >> 8;
	FString CombinedString = BytesToString(&Byte1, 1) += BytesToString(&Byte2, 1);
	CombinedString[0] = CombinedString[0] - 1;
	CombinedString[1] = CombinedString[1] - 1;
	return CombinedString;
}
static FString Uint32ToString(uint32 Input)
{
	uint8 Byte1 = Input;
	uint8 Byte2 = Input >> 8;
	uint8 Byte3 = Input >> 16;
	uint8 Byte4 = Input >> 24;
	FString CombinedString = BytesToString(&Byte1, 1) += BytesToString(&Byte2, 1) += BytesToString(&Byte3, 1) += BytesToString(&Byte4, 1);
	for (int i = 0; i < CombinedString.Len(); i++) { CombinedString[i] = CombinedString[i] - 1; }
	return CombinedString;
}
static FString ListOfBytesToString(const uint8* Input, int Count)
{
	FString NewString = BytesToString(Input, Count);
	for (int i = 0; i < NewString.Len(); i++) { NewString[i] = NewString[i] - 1; }
	return NewString;
}
static TArray<uint8> ReadBytes(const uint8* Input, int Index, int Count)
{
	TArray<uint8> ReturnedData;
	while (Index < Count)
	{
		ReturnedData.Add(BytesToUint8(Input, Index));
		Index++;
	}
	return ReturnedData;
}

struct FSabMabHeaderSection
{
	FString SectionName;
	uint16 UnknownAt4;
	uint16 UnknownAt6;
	uint32 OffsetInInnerFile;
	uint32 UnknownAtC;
};
struct FMaterialUser
{
	FString User;
	int MaterialIndex;
};
struct FMaterialEntry
{
	int EntryIndex;
	int StreamPosition;
	int MaterialHeaderSize;
	int HeaderPosition;
	uint16 MtrlNumber;
	int ExtraDataOffset;
	int PositionOfOffsetFromMtrlSectionOffset;
	uint32 StreamSize;
	int HcaHeaderSize;
	int HcaStreamStartPosition;
	int HcaStreamSize;
	int NoHcaHeaderSize;
	int TrackEndPosition;
	int NoHcaHeaderExtraDataSize;
	uint32 LocalSectionOffset;
	uint32 LoopStart;
	uint32 LoopEnd;
	uint32 ExtraDataSize;
	uint32 SampleRate;
	uint8 ChannelCount;
	uint8 Codec;
	uint16 ExtraDataId;
	bool IsLooping = LoopEnd > 0;

	uint8 HCAFMTChannelCount;
	int HCAFMTSampleRate;
	uint32 HCAFMTFrameCount;
	uint16 HCAFMTInsertedSamples;
	uint16 HCAFMTAppendedSamples;
	int HCAFMTSampleCount;

	uint16 HCACOMPFrameSize;
	uint8 HCACOMPMinResolution;
	uint8 HCACOMPMaxResolution;
	uint8 HCACOMPTrackCount;
	uint8 HCACOMPChannelConfig;
	uint8 HCACOMPTotalBandCount;
	uint8 HCACOMPBaseBandCount;
	uint8 HCACOMPStereoBandCount;
	uint8 HCACOMPBandsPerHfrGroup;

	uint16 HCACIPHEncryptionType;
};

struct FMusicLayer
{
	int Index;
	int Offset;
	uint8 Version;
	uint8 Flags;
	uint16 Size;
	uint16 MaterialIndex;
	uint16 LoopCount;
	uint32 UnknownAt8;
	uint32 EndPointSample;
};

struct FMusicSlice
{
	int Index;
	uint8 Version;
	uint16 Size;
	int SubTableOffset;
	int Offset;
	FString Name;
	uint16 CustomPointsCount;
	uint32 EntryPointsSample;
	uint32 ExitPointsSample;
	uint32 LoopStart;
	uint32 LoopEnd;
	uint32 MeterCount;
	int NameOffset;
	int NameSize;

	TArray<FMusicLayer> Layers;
};
struct FMusicMode
{
	int Offset;
	uint8 Version;
	uint16 Size;
	int NameOffset;
	uint8 NameSize;
	FString Name;
};

struct FSabMabInfo
{
#define WAV_HEADER_SIZE 44
#define BITS_PER_SAMPLE 16

public:
	bool bIsSab;
	TArray<FSabMabHeaderSection> HeaderSections;
	TArray<FMaterialEntry> Entries;
	TArray<TArray<uint8>> AudioData;
	TArray<uint8> ExportedWaveAudio;

	void WriteWaveHeader(uint8* header, uint32 dataLength, uint32 sampleRate, uint32 channels)
	{
		uint32 buff = 0;
		uint16 buff16 = 0;

		FMemory::Memcpy(header, "RIFF", 4);
		buff = dataLength + WAV_HEADER_SIZE - 8;
		FMemory::Memcpy(header + 4, &buff, 4);
		
		FMemory::Memcpy(header + 8, "WAVE", 4);
		FMemory::Memcpy(header + 12, "fmt ", 4);

		buff = 16;
		FMemory::Memcpy(header + 16, &buff, 4);

		buff16 = 1;
		FMemory::Memcpy(header + 20, &buff16, 2);
		FMemory::Memcpy(header + 22, &channels, 2);
		FMemory::Memcpy(header + 24, &sampleRate, 4);

		buff = sampleRate * 16 * 2;
		FMemory::Memcpy(header + 28, &buff, 4);

		buff16 = channels * (16 + 7) / 8;
		FMemory::Memcpy(header + 32, &buff16, 2);

		buff16 = 16;
		FMemory::Memcpy(header + 34, &buff16, 2);
		FMemory::Memcpy(header + 36, "data", 4);
		FMemory::Memcpy(header + 40, &dataLength, 4);
	}

	bool ReadSabMabInfo(const uint8*& Buffer, const uint8* BufferEnd, TArray<uint8> SabMabDataArray, int32 SabMabDataSize, FString* ErrorMessage = NULL, bool InHeaderDataOnly = false, void** OutFormatHeader = NULL)
	{
		const uint8* SabMabData = SabMabDataArray.GetData();
		int StartBufferOffset = 0; //Automatically Changes
		FString FileID = Uint32ToString(BytesToUint32(SabMabData, StartBufferOffset, false));
		uint8 VersionMain = BytesToUint8(SabMabData, StartBufferOffset);
		uint8 VersionSub = BytesToUint8(SabMabData, StartBufferOffset);
		uint16 HeaderUnknownAt6 = BytesToUint16(SabMabData, StartBufferOffset, false);
		uint8 SectionsCount = BytesToUint8(SabMabData, StartBufferOffset);
		uint8 DescriptorLength = BytesToUint8(SabMabData, StartBufferOffset);
		uint16 HeaderUnknownAtA = BytesToUint16(SabMabData, StartBufferOffset, false);
		uint32 FileSize = BytesToUint32(SabMabData, StartBufferOffset, false);

		int bytesNeededToPad = 16 - DescriptorLength % 16;
		int HeaderSize = 16 + DescriptorLength + bytesNeededToPad;

		if (FileID != "mabf")
		{
			if (FileID == "sabf") { bIsSab = true; }
			else
			{
				if (ErrorMessage) { *ErrorMessage = "FILE UNKNOWN: Invalid Sab/Mab file"; }
				return false;
			}
		}

		int InnerFileStartOffset = 0;
		int Position = InnerFileStartOffset + HeaderSize;
		for (int i = 0; i < SectionsCount; i++)
		{
			FSabMabHeaderSection HeaderSection;
			HeaderSection.SectionName = Uint32ToString(BytesToUint32(SabMabData, Position, false));
			HeaderSection.UnknownAt4 = BytesToUint16(SabMabData, Position, false);
			HeaderSection.UnknownAt6 = BytesToUint16(SabMabData, Position, false);
			HeaderSection.OffsetInInnerFile = BytesToUint32(SabMabData, Position, false);
			HeaderSection.UnknownAtC = BytesToUint32(SabMabData, Position, false);
			HeaderSections.Add(HeaderSection);
		}

		for (int i = 0; i < HeaderSections.Num(); i++)
		{
			if (HeaderSections[i].SectionName == "mtrl")
			{
				int InnerFilePositionOfFirstTracks = 0;
				FSabMabHeaderSection SectionDeclaration = HeaderSections[i];
				int MaterialSectionOffset = InnerFileStartOffset + SectionDeclaration.OffsetInInnerFile;
				int MaterialSectionOffsetOffset = MaterialSectionOffset + 2;
				uint16 EntryAddressesSize = BytesToUint16(SabMabData, MaterialSectionOffsetOffset, false);
				uint16 EntryCount = BytesToUint16(SabMabData, MaterialSectionOffsetOffset, false);
				for (int songEntryIndex = 0; songEntryIndex < EntryCount; songEntryIndex++)
				{
					int positionOfOffsetFromMaterialSectionOffset = MaterialSectionOffset + 16 + songEntryIndex * 4;
					int positionOfOffsetFromMaterialSectionOffsetOffset = positionOfOffsetFromMaterialSectionOffset;
					uint32 localEntryOffset = BytesToUint32(SabMabData, positionOfOffsetFromMaterialSectionOffsetOffset, false);
					if (songEntryIndex == 0) { InnerFilePositionOfFirstTracks = SectionDeclaration.OffsetInInnerFile + localEntryOffset; }
					int EntryOffset = MaterialSectionOffset + localEntryOffset + 5;
					int8 Codec = BytesToUint8(SabMabData, EntryOffset);
					if (Codec == 0) { continue; }
					FMaterialEntry Entry;
					Entry.EntryIndex = songEntryIndex;
					Entry.PositionOfOffsetFromMtrlSectionOffset = positionOfOffsetFromMaterialSectionOffset;
					Entry.LocalSectionOffset = BytesToUint32(SabMabData, Entry.PositionOfOffsetFromMtrlSectionOffset, false);
					Entry.HeaderPosition = MaterialSectionOffset + Entry.LocalSectionOffset;
					int HeaderPositionOffset = Entry.HeaderPosition + 4;
					Entry.ChannelCount = BytesToUint8(SabMabData, HeaderPositionOffset);
					Entry.Codec = BytesToUint8(SabMabData, HeaderPositionOffset);
					Entry.MtrlNumber = BytesToUint16(SabMabData, HeaderPositionOffset, false);
					Entry.SampleRate = BytesToUint32(SabMabData, HeaderPositionOffset, false);
					Entry.LoopStart = BytesToUint32(SabMabData, HeaderPositionOffset, false);
					Entry.LoopEnd = BytesToUint32(SabMabData, HeaderPositionOffset, false);
					Entry.ExtraDataSize = BytesToUint32(SabMabData, HeaderPositionOffset, false);
					Entry.StreamSize = BytesToUint32(SabMabData, HeaderPositionOffset, false);
					Entry.ExtraDataId = BytesToUint16(SabMabData, HeaderPositionOffset, false);
					Entry.ExtraDataOffset = Entry.HeaderPosition + 32;
					Entry.StreamPosition = Entry.ExtraDataOffset + Entry.ExtraDataSize;
					Entry.MaterialHeaderSize = Entry.StreamPosition - Entry.HeaderPosition;
					int ExtraDataOffsetOffset = Entry.ExtraDataOffset + 16 + 6;

					//why is this in big endian wtf?
					int hcaHeaderSizeByteBig = BytesToUint8(SabMabData, ExtraDataOffsetOffset);
					int hcaHeaderSizeByteSmall = BytesToUint8(SabMabData, ExtraDataOffsetOffset);
					Entry.HcaHeaderSize = (uint16)((hcaHeaderSizeByteBig << 8) + hcaHeaderSizeByteSmall);

					Entry.NoHcaHeaderExtraDataSize = Entry.ExtraDataSize - Entry.HcaHeaderSize;
					Entry.HcaStreamStartPosition = Entry.ExtraDataOffset + 16;
					Entry.HcaStreamSize = Entry.HcaHeaderSize + Entry.StreamSize;
					Entry.NoHcaHeaderSize = Entry.HcaStreamStartPosition - Entry.HeaderPosition;
					Entry.TrackEndPosition = Entry.HcaStreamStartPosition + Entry.HcaStreamSize;

					int InitalHCAOffset = 0;
					TArray<uint8> hcaFileBytes = SabMabDataArray;
					FString Signature = ListOfBytesToString(&hcaFileBytes.GetData()[Entry.HcaStreamStartPosition], Entry.HcaStreamStartPosition + 4);
					int StartPositionOffsetInit = Entry.HcaStreamStartPosition + 4;
					uint16 Version = BytesToUint16(hcaFileBytes.GetData(), StartPositionOffsetInit, false);
					uint16 HeaderSize = BytesToUint16(hcaFileBytes.GetData(), StartPositionOffsetInit, false);

					if (Signature != "HCA\0")
					{
						if (ErrorMessage) { *ErrorMessage = "Not a valid HCA file"; }
					}
					int StartPosition = Entry.HcaStreamStartPosition + 8;
					while (StartPosition < HeaderSize)
					{

						TArray<uint8> ChunkIDCaseName;
						for (int i = StartPosition; i < StartPosition + 4; i++)
						{
							uint8 ID = hcaFileBytes[i];
							ID &= 0x7f;
							ChunkIDCaseName.Add(ID);
						}
						FString CaseType = ListOfBytesToString(&ChunkIDCaseName.GetData()[0], 4);
						StartPosition += 4;



						if (CaseType == "fmt\0")
						{
							Entry.HCAFMTChannelCount = BytesToUint8(hcaFileBytes.GetData(), StartPosition);
							Entry.HCAFMTSampleRate = BytesToUint8(hcaFileBytes.GetData(), StartPosition) << 16 | BytesToUint16(hcaFileBytes.GetData(), StartPosition, true);
							Entry.HCAFMTFrameCount = BytesToUint32(hcaFileBytes.GetData(), StartPosition, true);
							Entry.HCAFMTInsertedSamples = BytesToUint16(hcaFileBytes.GetData(), StartPosition, true);
							Entry.HCAFMTAppendedSamples = BytesToUint16(hcaFileBytes.GetData(), StartPosition, true);
							Entry.HCAFMTSampleCount = Entry.HCAFMTFrameCount * 1024 - Entry.HCAFMTInsertedSamples - Entry.HCAFMTAppendedSamples;
							continue;
						}
						else if (CaseType == "comp")
						{
							Entry.HCACOMPFrameSize = BytesToUint16(hcaFileBytes.GetData(), StartPosition, true);
							Entry.HCACOMPMinResolution = BytesToUint8(hcaFileBytes.GetData(), StartPosition);
							Entry.HCACOMPMaxResolution = BytesToUint8(hcaFileBytes.GetData(), StartPosition);
							Entry.HCACOMPTrackCount = BytesToUint8(hcaFileBytes.GetData(), StartPosition);
							Entry.HCACOMPChannelConfig = BytesToUint8(hcaFileBytes.GetData(), StartPosition);
							Entry.HCACOMPTotalBandCount = BytesToUint8(hcaFileBytes.GetData(), StartPosition);
							Entry.HCACOMPBaseBandCount = BytesToUint8(hcaFileBytes.GetData(), StartPosition);
							Entry.HCACOMPStereoBandCount = BytesToUint8(hcaFileBytes.GetData(), StartPosition);
							Entry.HCACOMPBandsPerHfrGroup = BytesToUint8(hcaFileBytes.GetData(), StartPosition);
							continue;
						}
						else if (CaseType == "ciph")
						{
							Entry.HCACIPHEncryptionType = BytesToUint16(hcaFileBytes.GetData(), StartPosition, false);
							continue;
						}
						else if (CaseType == "pad\0")
						{
							StartPosition = HeaderSize;
							continue;
						}
					}

					ExportedWaveAudio.Reserve((BufferEnd - Buffer) * 16);
					ExportedWaveAudio.AddZeroed(WAV_HEADER_SIZE / ExportedWaveAudio.GetTypeSize());
					AudioData.AddZeroed(Entry.HCAFMTFrameCount);
					int StartPositionOffset = StartPosition;
					for (int i = 0; i < (int)Entry.HCAFMTFrameCount; i++)
					{
						TArray<uint8> Data;
						for (int z = StartPositionOffset; z < StartPositionOffset + Entry.HCACOMPFrameSize; z++)
						{
							int AddOffset = z;
							Data.Add(BytesToUint8(hcaFileBytes.GetData(), AddOffset));
						}
						AudioData[i] = Data;
					}

					uint8 header[WAV_HEADER_SIZE];
					int BytesPerSample = 2;
					int DataChunkSize = Entry.HCAFMTChannelCount * Entry.HCAFMTSampleCount * BytesPerSample;
					WriteWaveHeader(header, DataChunkSize, Entry.HCAFMTSampleRate, Entry.HCAFMTChannelCount);

					FMemory::Memcpy(ExportedWaveAudio.GetData(), header, WAV_HEADER_SIZE);

					Entries.Add(Entry);
				}
			}
			else { continue; }
		}

		return true;
	}
};