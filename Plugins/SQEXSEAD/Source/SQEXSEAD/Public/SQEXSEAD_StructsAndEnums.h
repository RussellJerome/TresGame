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

//NEW STRUCTS

static uint8 BytesToUint8(const uint8* Data, int index)
{
	uint8 value = 0;
	value |= Data[index];
	return value;
}
static uint16 BytesToUint16(const uint8* Data, int index)
{
	uint32 value = 0;
	value |= Data[index + 1] << 8;
	value |= Data[index];
	return value;
}
static uint16 BytesToUint16BigEndian(const uint8* Data, int index)
{
	uint32 value = 0;
	value |= Data[index + 1];
	value |= Data[index] << 8;
	return value;
}
static uint32 BytesToUint32(const uint8* Data, int index)
{
	uint32 value = 0;
	value |= Data[index + 3] << 24;
	value |= Data[index + 2] << 16;
	value |= Data[index + 1] << 8;
	value |= Data[index];
	return value;
}
static uint32 BytesToUint32BigEndian(const uint8* Data, int index)
{
	uint32 value = 0;
	value |= Data[index + 3];
	value |= Data[index + 2] << 8;
	value |= Data[index + 1] << 16;
	value |= Data[index] << 24;
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
static TArray<uint8> SubArray(TArray<uint8> Input, int Offset, int Length)
{
	TArray<uint8> ArrayOfBytes;
	for (int i = Length; i > Offset; i--)
	{
		ArrayOfBytes.Add(Input[i]);
	}
	return ArrayOfBytes;
}

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

	uint16 HCAFMTFrameSize;
	uint8 HCAFMTMinResolution;
	uint8 HCAFMTMaxResolution;
	uint8 HCAFMTTrackCount;
	uint8 HCAFMTChannelConfig;
	uint8 HCAFMTTotalBandCount;
	uint8 HCAFMTBaseBandCount;
	uint8 HCAFMTStereoBandCount;
	uint8 HCAFMTBandsPerHfrGroup;
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

struct FMusicEntry
{
	int Index;
	uint8 Version;
	uint8 Flags;
	int Offset;
	uint16 Size;
	uint8 SliceCount;
	uint8 ModeCount;
	int TableOffset;
	uint8 NameSize;
	int NameOffset;
	FString Name;
	TArray<FMusicSlice> Slices;
	TArray<FMusicMode> Modes;

	FMusicEntry(const uint8* SabMabData, int MusicSectionOffset, int EntryIndex, int InitialOffset)
	{
		Index = EntryIndex;
		Offset = MusicSectionOffset + BytesToUint32(SabMabData, MusicSectionOffset + 16 + EntryIndex * 4);
		Version = BytesToUint8(SabMabData, Offset);
		Flags = BytesToUint8(SabMabData, Offset + 1);
		Size = BytesToUint16(SabMabData, Offset + 2);
		SliceCount = BytesToUint8(SabMabData, Offset + 4);
		ModeCount = BytesToUint8(SabMabData, Offset + 5);
		NameSize = BytesToUint8(SabMabData, Offset + 72);
		if (Version <= 8)
		{
			NameOffset = Offset + 16;
			Size = 15;
		}
		else { NameOffset = Offset + Size; }
		Name = ListOfBytesToString(&SabMabData[NameOffset], NameSize);
		TableOffset = (NameOffset + NameSize + 15) - ((NameOffset + NameSize + 15) - (InitialOffset - 16)) % 16;
		for (int SliceIndex = 0; SliceIndex < SliceCount; SliceIndex++)
		{
			FMusicSlice Slice;
			Slice.Index = SliceIndex;
			Slice.Offset = Offset + BytesToUint32(SabMabData, TableOffset + SliceIndex * 4);
			Slice.Version = BytesToUint8(SabMabData, Slice.Offset);
			Slice.Size = BytesToUint16(SabMabData, Slice.Offset + 2);
			int LayerCount = 0;
			if (Slice.Version <= 7)
			{
				// 4: meter count 
				LayerCount = BytesToUint8(SabMabData, Slice.Offset + 5);
				Slice.CustomPointsCount = BytesToUint16(SabMabData, Slice.Offset + 6);
				Slice.EntryPointsSample = BytesToUint32(SabMabData, Slice.Offset + 8);
				Slice.ExitPointsSample = BytesToUint32(SabMabData, Slice.Offset + 12);
				Slice.LoopStart = BytesToUint32(SabMabData, Slice.Offset + 16);
				Slice.LoopEnd = BytesToUint32(SabMabData, Slice.Offset + 20);
				// 24+: meter transition timing info (offsets, points, curves, etc)
				Slice.NameOffset = 48;
				Slice.NameSize = 15;
				Slice.SubTableOffset = Slice.Offset + Slice.Size;
			}
			else
			{
				Slice.NameSize = BytesToUint8(SabMabData, Slice.Offset + 4);
				LayerCount = BytesToUint8(SabMabData, Slice.Offset + 5);
				Slice.CustomPointsCount = BytesToUint16(SabMabData, Slice.Offset + 6);
				Slice.EntryPointsSample = BytesToUint32(SabMabData, Slice.Offset + 8);
				Slice.ExitPointsSample = BytesToUint32(SabMabData, Slice.Offset + 12);
				Slice.LoopStart = BytesToUint32(SabMabData, Slice.Offset + 16);
				Slice.LoopEnd = BytesToUint32(SabMabData, Slice.Offset + 20);
				Slice.MeterCount = BytesToUint32(SabMabData, Slice.Offset + 24);
				// 0x18: meter count
				// 0x1c+: meter transition timing info (offsets, points, curves, etc)
				Slice.NameOffset = Slice.Offset + Slice.Size;
				Slice.SubTableOffset = (Slice.NameOffset + Slice.NameSize + 15) - ((Slice.NameOffset + Slice.NameSize + 15) - (InitialOffset - 16)) % 16;
			}
			Slice.Name = ListOfBytesToString(&SabMabData[Slice.NameOffset], Slice.NameSize);
			for (int LayerIndex = 0; LayerIndex < LayerCount; LayerIndex++)
			{
				FMusicLayer MusicSectionlayer;
				MusicSectionlayer.Index = LayerIndex;
				MusicSectionlayer.Offset = Slice.Offset + BytesToUint32(SabMabData, Slice.SubTableOffset + LayerIndex * 4);
				MusicSectionlayer.Version = BytesToUint8(SabMabData, MusicSectionlayer.Offset);
				MusicSectionlayer.Flags = BytesToUint8(SabMabData, MusicSectionlayer.Offset + 1);
				MusicSectionlayer.Size = BytesToUint16(SabMabData, MusicSectionlayer.Offset + 2);
				MusicSectionlayer.MaterialIndex = BytesToUint16(SabMabData, MusicSectionlayer.Offset + 4);
				MusicSectionlayer.LoopCount = BytesToUint16(SabMabData, MusicSectionlayer.Offset + 6);
				MusicSectionlayer.UnknownAt8 = BytesToUint32(SabMabData, MusicSectionlayer.Offset + 8);
				MusicSectionlayer.EndPointSample = BytesToUint32(SabMabData, MusicSectionlayer.Offset + 12);
				Slice.Layers.Add(MusicSectionlayer);
			}
			Slices.Add(Slice);
		}
		for (int ModeIndex = 0; ModeIndex < ModeCount; ModeIndex++)
		{
			FMusicMode Section;
			Section.Offset = Offset + BytesToUint32(SabMabData, TableOffset + SliceCount * 4 + ModeIndex * 4);
			Section.Version = BytesToUint8(SabMabData, Section.Offset);
			Section.Size = BytesToUint16(SabMabData, Section.Offset + 2);
			Section.NameSize = BytesToUint8(SabMabData, Section.Offset + 6);
			if (Section.Version <= 2)
			{
				Section.NameOffset = Section.Offset + 32;
				Section.NameSize = 15;
			}
			else { Section.NameOffset = Section.Offset + Section.Size; }
			Section.Name = ListOfBytesToString(&SabMabData[Section.NameOffset], Section.NameSize);
			Modes.Add(Section);
		}
	}
};

struct FMusicInstrumentMaterial
{
	uint8 Version;
	uint8 UnknownAt1;
	uint16 MaterialSize;
	uint16 MaterialIndex;
	uint16 Id;
	float Volume;
	uint32 SyncPoint;
	uint32 SampleRate;
};

struct FMusicInstrument
{
	int Offset;
	uint8 Version;
	uint8 UnknownAt1;
	uint16 Size;
	uint8 Type;
	uint8 Category;
	uint8 Priority;
	uint16 UnknownAt8;
	uint8 Flags;
	uint8 DistanceAttenuationCurve;
	float InteriorFactor;
	float AudibleRange;
	float InnerRange;
	float PlayLength;
	int NameSize;
	int NameOffset;
	FString Name;
	TArray<FMusicInstrumentMaterial> Materials;

	FMusicInstrument(const uint8* SabMabData, int InstrumentSectionOffset, int EntryIndex)
	{
		Offset = InstrumentSectionOffset + BytesToUint32(SabMabData, InstrumentSectionOffset + 16 + EntryIndex * 4);
		Version = BytesToUint8(SabMabData, Offset);
		UnknownAt1 = BytesToUint8(SabMabData, Offset + 1);
		Size = BytesToUint16(SabMabData, Offset + 2);
		Type = BytesToUint8(SabMabData, Offset + 4);
		uint8 MaterialCount = BytesToUint8(SabMabData, Offset + 5);
		Category = BytesToUint8(SabMabData, Offset + 6);
		Priority = BytesToUint8(SabMabData, Offset + 7);
		UnknownAt8 = BytesToUint16(SabMabData, Offset + 8);
		Flags = BytesToUint8(SabMabData, Offset + 10);
		DistanceAttenuationCurve = BytesToUint8(SabMabData, Offset + 11);

		InteriorFactor = *reinterpret_cast<float*>(SabMabData[Offset + 12]);
		AudibleRange = *reinterpret_cast<float*>(SabMabData[Offset + 16]);
		InnerRange = *reinterpret_cast<float*>(SabMabData[Offset + 20]);
		PlayLength = *reinterpret_cast<float*>(SabMabData[Offset + 24]);

		NameOffset = Offset + 48;
		NameSize = 15;

		Name = ListOfBytesToString(&SabMabData[NameOffset], NameSize);

		int MaterialOffset = NameOffset + NameSize + 1;
		for (int MaterialIndex = 0; MaterialIndex < MaterialCount; MaterialIndex++)
		{
			FMusicInstrumentMaterial Material;
			Material.Version = BytesToUint8(SabMabData, MaterialOffset);
			Material.UnknownAt1 = BytesToUint8(SabMabData, MaterialOffset + 1);
			Material.MaterialSize = BytesToUint16(SabMabData, MaterialOffset + 2);
			Material.MaterialIndex = BytesToUint16(SabMabData, MaterialOffset + 4);
			Material.Id = BytesToUint16(SabMabData, MaterialOffset + 6);
			Material.Volume = *reinterpret_cast<float*>(SabMabData[MaterialOffset + 8]);
			Material.SyncPoint = BytesToUint32(SabMabData, MaterialOffset + 12);
			Material.SampleRate = BytesToUint32(SabMabData, MaterialOffset + 16);
			MaterialOffset += Material.MaterialSize;
			//Materials.Add(Material); //This was not in the original but this may be what it needs
		}
	}
};
//


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
	TArray<FSabMabHeaderSection> HeaderSections;
	TArray<FMaterialEntry> Entries;
	TArray<FMaterialUser> Users;
	TArray<FMusicEntry> MusicEntries;
	TArray<FMusicInstrument> Instruments;
	TArray<uint8> AudioData;

	size_t bytes_to_samples(size_t bytes, int channels, int bits_per_sample)
	{
		if (channels <= 0 || bits_per_sample <= 0) return 0;
		return ((int64_t)bytes * 8) / channels / bits_per_sample;
	}

	bool ReadSabMabInfo(TArray<uint8> SabMabDataArray, int32 SabMabDataSize, FString* ErrorMessage = NULL, bool InHeaderDataOnly = false, void** OutFormatHeader = NULL)
	{
		const uint8* SabMabData = SabMabDataArray.GetData();
		//Version 3 Reader
		int InitialOffset = 0;
		//Mab/Sab Header
			uint32 FileID = BytesToUint32(SabMabData, InitialOffset);	//This should display MABF or SABF
			InitialOffset += 4;
			uint8 VersionMain = BytesToUint8(SabMabData, InitialOffset); //Displays the Main version of the Mab/Sab (Usually Displays 2)
			InitialOffset += 1;
			uint8 VerionSub = BytesToUint8(SabMabData, InitialOffset); //Displays the Sub version of the Mab/Sab. Can display 0, 1, or 2 (Mab/Sab have version 2.0, 2.1, 2.2)
			InitialOffset += 1;
			uint16 HeaderUnknownAt6 = BytesToUint16(SabMabData, InitialOffset); // ??? Need Documenting
			InitialOffset += 2;
			uint8 SectionsCount = BytesToUint8(SabMabData, InitialOffset); // Amount of Sections to loop through
			InitialOffset += 1;
			uint8 DescriptorLength = BytesToUint8(SabMabData, InitialOffset); // Length of Descriptor
			InitialOffset += 1;
			uint16 HeaderUnknownAtA = BytesToUint16(SabMabData, InitialOffset); // ??? Need Documenting
			InitialOffset += 2;
			uint32 FileSize = BytesToUint32(SabMabData, InitialOffset); // Size of the Mab/Sab file
			InitialOffset += 4;
		//
		int bytesNeededToPad = 16 - DescriptorLength % 16;
		int HeaderSize = 16 + DescriptorLength + bytesNeededToPad;

		//Determine if it is a Mab or Sab file
		bool bIsSab = false;
		if (Uint32ToString(FileID) != "mabf")
		{
			if (Uint32ToString(FileID) == "sabf") { bIsSab = true; }
			else
			{
				if (ErrorMessage) { *ErrorMessage = "FILE UNKNOWN: Invalid Sab/Mab file"; }
				return false;
			}
		}
		//

		//Handle Section Reading
		int SectionPosition = (InitialOffset - 16) + HeaderSize; //We subtract 16 because the header is 16 bytes - we have to ignore the additions
		for (int i = 0; i < SectionsCount; i++)
		{
			FSabMabHeaderSection HeaderSection;
			//Sab/Mab Header Section
				HeaderSection.SectionName = BytesToUint32(SabMabData, SectionPosition);
				SectionPosition += 4;
				HeaderSection.UnknownAt4 = BytesToUint16(SabMabData, SectionPosition);
				SectionPosition += 2;
				HeaderSection.UnknownAt6 = BytesToUint16(SabMabData, SectionPosition);
				SectionPosition += 2;
				HeaderSection.OffsetInInnerFile = BytesToUint32(SabMabData, SectionPosition);
				SectionPosition += 4;
				HeaderSection.UnknownAtC = BytesToUint32(SabMabData, SectionPosition);
				SectionPosition += 4;
			//
			HeaderSections.Add(HeaderSection); //It now displays all sections correctly
		}

		//Handle Material Reading
		for (int i = 0; i < HeaderSections.Num(); i++)
		{
			if (Uint32ToString(HeaderSections[i].SectionName) == "mtrl")
			{
				int InnerFilePositionOfFirstTracks = 0;
				FSabMabHeaderSection SectionDeclaration = HeaderSections[i];
				int MaterialSectionOffset = (InitialOffset - 16) + SectionDeclaration.OffsetInInnerFile;
				uint16 EntryAddressesSize = BytesToUint16(SabMabData, MaterialSectionOffset + 2);
				uint16 EntryCount = BytesToUint16(SabMabData, MaterialSectionOffset + 4);
				for (int songEntryIndex = 0; songEntryIndex < EntryCount; songEntryIndex++)
				{
					int positionOfOffsetFromMaterialSectionOffset = MaterialSectionOffset + 16 + songEntryIndex * 4;
					uint32 localEntryOffset = BytesToUint32(SabMabData, positionOfOffsetFromMaterialSectionOffset);
					if (songEntryIndex == 0) { InnerFilePositionOfFirstTracks = SectionDeclaration.OffsetInInnerFile + localEntryOffset; }
					int EntryOffset = MaterialSectionOffset + localEntryOffset;
					int8 Codec = BytesToUint8(SabMabData, EntryOffset + 5);
					if (Codec == 0) { continue; }
					FMaterialEntry Entry;
					Entry.EntryIndex = songEntryIndex;
					Entry.PositionOfOffsetFromMtrlSectionOffset = positionOfOffsetFromMaterialSectionOffset;
					Entry.LocalSectionOffset = BytesToUint32(SabMabData, Entry.PositionOfOffsetFromMtrlSectionOffset);
					Entry.HeaderPosition = MaterialSectionOffset + Entry.LocalSectionOffset;
					Entry.ChannelCount = BytesToUint8(SabMabData, Entry.HeaderPosition + 4);
					Entry.Codec = BytesToUint8(SabMabData, Entry.HeaderPosition + 5);
					Entry.MtrlNumber = BytesToUint16(SabMabData, Entry.HeaderPosition + 6);
					Entry.SampleRate = BytesToUint32(SabMabData, Entry.HeaderPosition + 8);
					Entry.LoopStart = BytesToUint32(SabMabData, Entry.HeaderPosition + 12);
					Entry.LoopEnd = BytesToUint32(SabMabData, Entry.HeaderPosition + 16);
					Entry.ExtraDataSize = BytesToUint32(SabMabData, Entry.HeaderPosition + 20);
					Entry.StreamSize = BytesToUint32(SabMabData, Entry.HeaderPosition + 24);
					Entry.ExtraDataId = BytesToUint16(SabMabData, Entry.HeaderPosition + 28);
					Entry.ExtraDataOffset = Entry.HeaderPosition + 32;
					Entry.StreamPosition = Entry.ExtraDataOffset + Entry.ExtraDataSize;
					Entry.MaterialHeaderSize = Entry.StreamPosition - Entry.HeaderPosition;

					//why is this in big endian wtf?
					int hcaHeaderSizeByteBig = BytesToUint8(SabMabData, Entry.ExtraDataOffset + 16 + 6);
					int hcaHeaderSizeByteSmall = BytesToUint8(SabMabData, Entry.ExtraDataOffset + 16 + 7);
					Entry.HcaHeaderSize = (uint16)((hcaHeaderSizeByteBig << 8) + hcaHeaderSizeByteSmall);

					Entry.NoHcaHeaderExtraDataSize = Entry.ExtraDataSize - Entry.HcaHeaderSize;
					Entry.HcaStreamStartPosition = Entry.ExtraDataOffset + 16;
					Entry.HcaStreamSize = Entry.HcaHeaderSize + Entry.StreamSize;
					Entry.NoHcaHeaderSize = Entry.HcaStreamStartPosition - Entry.HeaderPosition;
					Entry.TrackEndPosition = Entry.HcaStreamStartPosition + Entry.HcaStreamSize;




					int InitalHCAOffset = 0;
					//Fix SubArray
					TArray<uint8> hcaFileBytes = SabMabDataArray;
					FString Signature = ListOfBytesToString(&hcaFileBytes.GetData()[Entry.HcaStreamStartPosition], Entry.HcaStreamStartPosition + 4);
					uint16 Version = BytesToUint16(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 4);
					uint16 HeaderSize = BytesToUint16(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 6);

					if (Signature != "HCA\0")
					{
						if (ErrorMessage) { *ErrorMessage = "Not a valid HCA file"; }
					}
					int StartPosition = Entry.HcaStreamStartPosition + 8;
					while (StartPosition < HeaderSize)
					{
						for (int i = Entry.HcaStreamStartPosition + 8; i < Entry.HcaStreamStartPosition + 12; i++) { hcaFileBytes[i] &= 0x7f; }
						FString CaseType = ListOfBytesToString(&hcaFileBytes.GetData()[Entry.HcaStreamStartPosition + 8], Entry.HcaStreamStartPosition + 12);
						if (CaseType == "fmt\0")
						{
							Entry.HCAFMTChannelCount = BytesToUint8(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 12);
							Entry.HCAFMTSampleRate = BytesToUint8(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 13) << 16 | BytesToUint16BigEndian(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 14);
							Entry.HCAFMTFrameCount = BytesToUint32BigEndian(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 16);
							if (ErrorMessage) { *ErrorMessage = FString::FromInt(Entry.HCAFMTSampleRate); }
							Entry.HCAFMTInsertedSamples = BytesToUint16BigEndian(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 20);
							Entry.HCAFMTAppendedSamples = BytesToUint16BigEndian(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 22);
							Entry.HCAFMTSampleCount = Entry.HCAFMTFrameCount * 1024 - Entry.HCAFMTInsertedSamples - Entry.HCAFMTAppendedSamples;
							StartPosition += 14;
						}
						else if (CaseType == "comp")
						{
							Entry.HCAFMTFrameSize = BytesToUint16BigEndian(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 24);
							Entry.HCAFMTMinResolution = BytesToUint8(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 25);
							Entry.HCAFMTMaxResolution = BytesToUint8(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 26);
							Entry.HCAFMTTrackCount = BytesToUint8(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 27);
							Entry.HCAFMTChannelConfig = BytesToUint8(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 28);
							Entry.HCAFMTTotalBandCount = BytesToUint8(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 29);
							Entry.HCAFMTBaseBandCount = BytesToUint8(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 30);
							Entry.HCAFMTStereoBandCount = BytesToUint8(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 31);
							Entry.HCAFMTBandsPerHfrGroup = BytesToUint8(hcaFileBytes.GetData(), Entry.HcaStreamStartPosition + 32);
						}
						else if (CaseType == "pad\0")
						{
							StartPosition = HeaderSize;
						}
					}

					//Handle Raw Audio
					//for (int i = 0; i < Entry.HCAFMTFrameCount; i++)
					for (int i = 0; i < (int)Entry.HCAFMTFrameCount; i++)
					{
						TArray<uint8> data;
						for (int z = (Entry.HcaStreamStartPosition + 33); z < Entry.HCAFMTFrameSize; z++)
						{
							AudioData.Add(hcaFileBytes[z]);
						}
					}
					//

					Entries.Add(Entry);
				}
			}
			else { continue; }
		}

		//Handle Section Parsing
		if (bIsSab)
		{

		}
		else
		{
			//Handle Mab Parsing
			int MusicSectionOffset = 0;
			int InstrumentSectionOffset = 0;
			for (int i = 0; i < HeaderSections.Num(); i++)
			{
				if (Uint32ToString(HeaderSections[i].SectionName) == "musc")
				{
					MusicSectionOffset = (InitialOffset - 16) + HeaderSections[i].OffsetInInnerFile;
				}
				else if (Uint32ToString(HeaderSections[i].SectionName) == "inst")
				{
					InstrumentSectionOffset = (InitialOffset - 16) + HeaderSections[i].OffsetInInnerFile;
				}
			}

			uint16 TrackEntryCount = BytesToUint16(SabMabData, MusicSectionOffset + 4);
			for (int EntryIndex = 0; EntryIndex < TrackEntryCount; EntryIndex++)
			{
				FMusicEntry Entry = FMusicEntry::FMusicEntry(SabMabData, MusicSectionOffset, EntryIndex, InitialOffset);
				MusicEntries.Add(Entry);
			}

			uint16 instrumentEntryCount = BytesToUint16(SabMabData, InstrumentSectionOffset + 4);
			for (int InstrumentIndex = 0; InstrumentIndex < instrumentEntryCount; InstrumentIndex++)
			{
				FMusicInstrument Instrument = FMusicInstrument::FMusicInstrument(SabMabData, InstrumentSectionOffset, InstrumentIndex);
				Instruments.Add(Instrument);
			}

			for(FMusicEntry Entry : MusicEntries)
			{
				for (FMusicSlice Slice : Entry.Slices)
				{
					for (FMusicLayer Layer : Slice.Layers)
					{
						FMaterialUser User;
						//MaterialSection.AddUser(new MusicLayerMaterialUser(slice, layer), layer.MaterialIndex);
						User.User = "CANNOT READ NAMES YET";
						User.MaterialIndex = Layer.MaterialIndex;
						Users.Add(User);
					}
				}
			}
			for (FMusicInstrument Instrument : Instruments)
			{
				for (FMusicInstrumentMaterial Material : Instrument.Materials)
				{
					FMaterialUser User;
					//MaterialSection.AddUser(instrument, material.MaterialIndex);
					User.User = "CANNOT READ NAMES YET";
					User.MaterialIndex = Material.MaterialIndex;
					Users.Add(User);
				}
			}
		}

		int endOfInnerFile = (InitialOffset - 16) + FileSize;
		/*BytesBeforeFile = fileBytes.SubArray(0, (InitialOffset - 16));
		BytesAfterFile = fileBytes.SubArray(endOfInnerFile, fileBytes.Length - endOfInnerFile);
		InnerFileBytes = fileBytes.SubArray((InitialOffset - 16), FileSize);*/

		return true;
	}
};