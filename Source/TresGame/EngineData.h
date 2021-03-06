// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EngineData.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------
UENUM(BlueprintType)
enum class ESQEX_GPU_PARTICLE_REACTION_TYPE : uint8
{
	SQEX_GPU_PARTICLE_REACTION_TYPE_EXPLOSION = 0 UMETA(DisplayName = "Explosion"),
	SQEX_GPU_PARTICLE_REACTION_TYPE_EXPLOSION_SPHARE = 1 UMETA(DisplayName = "Explosion Sphare"),
	SQEX_GPU_PARTICLE_REACTION_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_AI_ThinkType : uint8
{
	SQEX_AI_THINK_TYPE_NONE = 0 UMETA(DisplayName = "None"),
	SQEX_AI_THINK_TYPE_NORMAL = 1 UMETA(DisplayName = "Normal"),
	SQEX_AI_THINK_TYPE_AUTONOMOUS = 2 UMETA(DisplayName = "Autonomous"),
	SQEX_AI_THINK_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_OverlappedForceType : uint8
{
	SQEX_OFT_NONE = 0 UMETA(DisplayName = "None"),
	SQEX_OFT_SPLINE01 = 1 UMETA(DisplayName = "Spline 1"),
	SQEX_OFT_SPLINE_ANY_NWS = 2 UMETA(DisplayName = "Spline Any NWS"),
	SQEX_OFT_SPLINE_GRD_WS = 3 UMETA(DisplayName = "Spline GRD WS"),
	SQEX_OFT_SPLINE02 = 4 UMETA(DisplayName = "Spline 2"),
	SQEX_OFT_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_FreeFlowKind : uint8
{
	SQEX_FREE_FLOW_KIND_NONE = 0,
	SQEX_FREE_FLOW_KIND_ENEMY = 1,
	SQEX_FREE_FLOW_KIND_ETURN = 2,
	SQEX_FREE_FLOW_KIND_ERIDE = 3,
	SQEX_FREE_FLOW_KIND_GROUND = 4,
	SQEX_FREE_FLOW_KIND_WALL = 5,
	SQEX_FREE_FLOW_KIND_POLE = 6,
	SQEX_FREE_FLOW_KIND_RAIL = 7,
	SQEX_FREE_FLOW_KIND_ROPE = 8,
	SQEX_FREE_FLOW_KIND_BALL = 9,
	SQEX_FREE_FLOW_KIND_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESqEX_LastInputDeviceType : uint8
{
	NOINPUT = 0,
	KEYBOARD = 1,
	GAMEPAD = 2,
	_MAX = 3 UMETA(Hidden),
	ESqEX_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_ChangeFaceAnimBlendParamFunction : uint8
{
	Linear = 0,
	EaseIn = 1,
	EaseOut = 2,
	EaseInOut = 3,
	_MAX = 4 UMETA(Hidden),
	ESQEX_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_Platform : uint8
{
	SQEX_PLATFORM_PC = 0,
	SQEX_PLATFORM_PS4_BASE = 1,
	SQEX_PLATFORM_PS4_PRO2K = 2,
	SQEX_PLATFORM_PS4_PRO4K = 3,
	SQEX_PLATFORM_XBOXONE = 4,
	SQEX_PLATFORM_XBOXONEX = 5,
	SQEX_PLATFORM_PS4_BASE_MATINEE = 6,
	SQEX_PLATFORM_XBOXONE_MATINEE = 7,
	SQEX_PLATFORM_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_HeightFogDirectivity : uint8
{
	SQEX_HEIGHT_FOG_DIRECTIVITY_DEFAULT = 0,
	SQEX_HEIGHT_FOG_DIRECTIVITY_AXIS_X = 1,
	SQEX_HEIGHT_FOG_DIRECTIVITY_AXIS_Y = 2,
	SQEX_HEIGHT_FOG_DIRECTIVITY_FOGLOCATION = 3,
	SQEX_HEIGHT_FOG_DIRECTIVITY_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_OverridePhysMaterialMode : uint8
{
	NORMAL = 0,
	WALL_CLIMB = 1,
	ESQEX_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_ScreenFadeLayer : uint8
{
	SQEX_FADE_LAYER_FG = 0,
	SQEX_FADE_LAYER_PRE_FG = 1,
	SQEX_FADE_LAYER_3D = 2,
	SQEX_FADE_LAYER_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_PrimitiveSortAlgorithm : uint8
{
	None = 0,
	AscZ_AscX = 1,
	DescZ_AscX = 2,
	ESQEX_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_KINGDOMHEARTSSPACE_TYPE : uint8
{
	ESQEX_KINGDOMHEARTSSPACE_TYPE = 0,
	ESQEX_KINGDOMHEARTSSPACE_TYPE01 = 1,
	ESQEX_KINGDOMHEARTSSPACE_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EParticleSQEXParameterType : uint8
{
	PSSPT_BlackColor = 0,
	PSSPT_WhiteColor = 1,
	PSSPT_EmissiveParameter = 2,
	PSSPT_OpacityParameter = 3,
	PSSPT_GlowColor = 4,
	PSSPT_GlowParameter = 5,
	PSSPT_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EParticleSQEXTextureSampleType : uint8
{
	PSTST_Emissive = 0,
	PSTST_Opacity = 1,
	PSTST_Glow = 2,
	PSTST_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESqExPowerMode : uint8
{
	ESqExPowerMode_Nomal = 0,
	ESqExPowerMode_ClampedPow = 1,
	ESqExPowerMode_UnClampedPow = 2,
	ESqExPowerMode_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEXSceneTextureId : uint8
{
	PPI_SQEX_SC_DarkColor = 0,
	PPI_SQEX_SC_IndirectLight = 1,
	PPI_SQEX_SC_Discernment = 2,
	PPI_SQEX_SC_LightAttenuation = 3,
	PPI_SQEX_SC_SceneDepthConved = 4,
	PPI_SQEX_SC_IsChara = 5,
	PPI_SQEX_SC_IsKHSSceneColorBlend = 6,
	PPI_SQEX_SC_IndirectIrradiance = 7,
	PPI_SQEX_SC_MaterialAO = 8,
	PPI_SQEX_SC_IsEnableDiffusion = 9,
	PPI_SQEX_SC_SEPARATE = 10,
	PPI_SQEX_SC_LightMap = 11,
	PPI_SQEX_SC_AmbientColorMap = 12,
	PPI_SQEX_SC_LightShadow = 13,
	PPI_SQEX_SC_AmbientReflectionMap = 14,
	PPI_SQEX_SC_LightSubsurface = 15,
	PPI_SQEX_SC_AmbientPreIntegratedGF_X = 16,
	PPI_SQEX_SC_AmbientPreIntegratedGF_Y = 17,
	PPI_SQEX_SC_IndirectLightWithEmissive = 18,
	PPI_SQEX_SC_NoShadowLightMap = 19,
	PPI_SQEX_SC_BackupSceneColor = 20,
	PPI_SQEX_SC_RverseTranslucentDepth = 21,
	PPI_SQEX_SC_TranslucentDepth = 22,
	PPI_SQEX_SC_PseudoVolumeDensityMap = 23,
	PPI_SQEX_SC_PrevImage = 24,
	PPI_SQEX_SC_IndirectCapsuleShadows = 25,
	PPI_SQEX_SC_Obsolete002 = 26,
	PPI_SQEX_SC_SceneNormal = 27,
	PPI_SQEX_SC_Obsolete003 = 28,
	PPI_SQEX_SC_AmbientDiffuseLookup = 29,
	PPI_SQEX_SC_TranslucentSliceCapture = 30,
	PPI_SQEX_SC_MAX = 31 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_TextureID : uint8
{
	ESQEXID_CustomTexture = 0,
	ESQEXID_FastNoiseLUT = 1,
	ESQEXID_OceanOffsetMap = 2,
	ESQEXID_OceanNormalMap = 3,
	ESQEXID_OceanShoreRandomizerMap = 4,
	ESQEXID_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_TIME_NODE_TYPE : uint8
{
	SQEX_TIME_NODE_TYPE_NORMAL = 0,
	SQEX_TIME_NODE_TYPE_EFFECT = 1,
	SQEX_TIME_NODE_TYPE_ENV = 2,
	SQEX_TIME_NODE_TYPE_CHARA = 3,
	SQEX_TIME_NODE_TYPE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_PARTICLE_DRAW_BATCHING_TYPE : uint8
{
	ESQEX_PARTICLE_DRAW_BATCHING_TYPE_STATIC = 0,
	ESQEX_PARTICLE_DRAW_BATCHING_TYPE_DYNAMIC = 1,
	ESQEX_PARTICLE_DRAW_BATCHING_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_PARTICLE_DRAW_BATCHING_CATEGORY : uint8
{
	ESQEX_PARTICLE_DRAW_BATCHING_CATEGORY_WORLD = 0,
	ESQEX_PARTICLE_DRAW_BATCHING_CATEGORY_OWNER = 1,
	ESQEX_PARTICLE_DRAW_BATCHING_CATEGORY_PSC = 2,
	ESQEX_PARTICLE_DRAW_BATCHING_CATEGORY_EMITTER = 3,
	ESQEX_PARTICLE_DRAW_BATCHING_CATEGORY_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_LocalSpaceScaleOrder : uint8
{
	SQEX_LocalSpaceScaleOrder_RotScal = 0,
	SQEX_LocalSpaceScaleOrder_ScalRot = 1,
	SQEX_LocalSpaceScaleOrder_MAX  = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_EMITTER_SCALE_ORDER_TYPE : uint8
{
	SQEX_EMITTER_SCALE_ORDER_TYPE_LOCAL = 0,
	SQEX_EMITTER_SCALE_ORDER_TYPE_PARENT = 1,
	SQEX_EMITTER_SCALE_ORDER_TYPE_COMPONENT = 2,
	SQEX_EMITTER_SCALE_ORDER_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_TAKEOVER_TYPE : uint8
{
	SQEX_TAKEOVER_TYPE_NONE = 0,
	SQEX_TAKEOVER_TYPE_ALWAYS = 1,
	SQEX_TAKEOVER_TYPE_SPAWN_TIME_ONLY = 2,
	SQEX_TAKEOVER_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_2DFLUID_INFLOW_TYPE : uint8
{
	ESQEX_2DFLUID_INFLOW_TYPE_POINT = 0,
	ESQEX_2DFLUID_INFLOW_TYPE_RING = 1,
	ESQEX_2DFLUID_INFLOW_TYPE_BOX = 2,
	ESQEX_2DFLUID_INFLOW_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_FADE_TYPE : uint8
{
	ESQEX_FADE_TYPE_FADEIN = 0,
	ESQEX_FADE_TYPE_FADEEND = 1,
	ESQEX_FADE_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_ANY_VERTEX_SHAPE_TYPE : uint8
{
	SQEX_ANY_VERTEX_SHAPE_TYPE_SPHERE = 0,
	SQEX_ANY_VERTEX_SHAPE_TYPE_CYLINDER = 1,
	SQEX_ANY_VERTEX_SHAPE_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_VERTEX_UV_SPAWN_TYPE : uint8
{
	SQEX_VERTEX_UV_SPAWN_TYPE_NONE = 0,
	SQEX_VERTEX_UV_SPAWN_TYPE_H = 1,
	SQEX_VERTEX_UV_SPAWN_TYPE_W = 2,
	SQEX_VERTEX_UV_SPAWN_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_CURLE_NOISE_TIME_SCALE_AXIS_TYPE : uint8
{
	ESQEX_CURLE_NOISE_TIME_SCALE_AXIS_TYPE_XYZ = 0,
	ESQEX_CURLE_NOISE_TIME_SCALE_AXIS_TYPE_X = 1,
	ESQEX_CURLE_NOISE_TIME_SCALE_AXIS_TYPE_Y = 2,
	ESQEX_CURLE_NOISE_TIME_SCALE_AXIS_TYPE_Z = 3,
	ESQEX_CURLE_NOISE_TIME_SCALE_AXIS_TYPE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_CURLNOISE_TIME_SCALE_TYPE : uint8
{
	ESQEX_CURLNOISE_TIME_SCALE_TYPE_EMITTER_TOTAL_TIME = 0,
	ESQEX_CURLNOISE_TIME_SCALE_TYPE_PARTICLE_TIME = 1,
	ESQEX_CURLNOISE_TIME_SCALE_TYPE_GAME_TIME = 2,
	ESQEX_CURLNOISE_TIME_SCALE_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_ExternalVertexSpawnType : uint8
{
	ESQEX_ExternalVertexSpawnType_Pivot = 0,
	ESQEX_ExternalVertexSpawnType_Surface = 1,
	ESQEX_ExternalVertexSpawnType_VertexOder = 2,
	ESQEX_ExternalVertexSpawnType_VertexRandom = 3,
	ESQEX_ExternalVertexSpawnType_VertexLine = 4,
	ESQEX_ExternalVertexSpawnType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_SPAWN_ROT_CALC_MODE : uint8
{
	ESQEX_SPAWN_ROT_CALC_MODE_TANGENT = 0,
	ESQEX_SPAWN_ROT_CALC_MODE_QUAT_Normals = 1,
	ESQEX_SPAWN_ROT_CALC_MODE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_SPAWN_SOURCE_TYPE : uint8
{
	ESQEX_SPAWN_SOURCE_TYPE_Vert = 0,
	ESQEX_SPAWN_SOURCE_TYPE_Surface = 1,
	ESQEX_SPAWN_SOURCE_TYPE_Uniform = 2,
	ESQEX_SPAWN_SOURCE_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_IN_LIGHT_TYPE : uint8
{
	SQEX_IN_LIGHT_TYPE_MAIN = 0,
	SQEX_IN_LIGHT_TYPE_SUB = 1,
	SQEX_IN_LIGHT_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_OVERRIDE_PARTICLE_POS_TYPE : uint8
{
	ESQEX_OVERRIDE_PARTICLE_POS_TYPE_NONE = 0,
	ESQEX_OVERRIDE_PARTICLE_POS_TYPE_RUBG_GROUP = 1,
	ESQEX_OVERRIDE_PARTICLE_POS_TYPE_AVOID_MOVE = 2,
	ESQEX_OVERRIDE_PARTICLE_POS_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_CREATE_GENERATE_TYPE : uint8
{
	ESQEX_CREATE_GENERATE_TYPE_TIME = 0,
	ESQEX_CREATE_GENERATE_TYPE_PARTICLE_DEATH = 1,
	ESQEX_CREATE_GENERATE_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_AROUND_TYPE : uint8
{
	ESQEX_AROUND_TYPE_RADIUS_ATTACH = 0,
	ESQEX_AROUND_TYPE_ATTRACTOR = 1,
	ESQEX_AROUND_TYPE_HOMING = 2,
	ESQEX_AROUND_TYPE_SPHERE_CONTACT = 3,
	ESQEX_AROUND_TYPE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE : uint8
{
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_NORMAL = 0,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_01 = 1,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_02 = 2,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_03 = 3,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_04 = 4,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_05 = 5,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_06 = 6,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_07 = 7,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_08 = 8,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_09 = 9,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_0A = 10,
	ESQEX_EFF_PLAYER_WEAR_COLOR_TYPE_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_AURA_ID : uint8
{
	SQEX_AURA_TYPE_ONE = 0,
	SQEX_AURA_TYPE_TWO = 1,
	SQEX_AURA_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_RAYCAST_SPAWN_THEME : uint8
{
	ESQEX_RAYCAST_SPAWN_THEME_ONHIT = 0,
	ESQEX_RAYCAST_SPAWN_THEME_FORCE_SPAWN = 1,
	ESQEX_RAYCAST_SPAWN_THEME_FORCE_SPAWN_CHECK_MAT = 2,
	ESQEX_RAYCAST_SPAWN_THEME_MAX  = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_FluidSpawnType : uint8
{
	ESQEX_FluidSpawnTypeBOX = 0,
	ESQEX_FluidSpawnTypeSphere = 1,
	ESQEX_FluidSpawnTypeDisk = 2,
	ESQEX_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_SeaSurfaceSpawnMode : uint8
{
	ESQEX_SeaSurfaceSpawnMode_Direct = 0,
	ESQEX_SeaSurfaceSpawnMode_Splashes = 1,
	ESQEX_SeaSurfaceSpawnMode_MAX  = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_PARTICLE_MODULE_FORCE_TYPE : uint8
{
	SQEX_PARTICLE_MODULE_FORCE_TYPE_SPHERE = 0,
	SQEX_PARTICLE_MODULE_FORCE_TYPE_BOX = 1,
	SQEX_PARTICLE_MODULE_FORCE_TYPE_CAPSULE = 2,
	SQEX_PARTICLE_MODULE_FORCE_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_HISTORY_TRACING_START_TYPE : uint8
{
	SQEX_HISTORY_TRACING_START_TYPE_LOOPEND = 0,
	SQEX_HISTORY_TRACING_START_TYPE_EXTERNAL = 1,
	SQEX_HISTORY_TRACING_START_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_TAIL_TWIST_MESH_AXIS_TYPE : uint8
{
	SQEX_TAIL_TWIST_MESH_AXIS_TYPE_NONE = 0,
	SQEX_TAIL_TWIST_MESH_AXIS_TYPE_X = 1,
	SQEX_TAIL_TWIST_MESH_AXIS_TYPE_Y = 2,
	SQEX_TAIL_TWIST_MESH_AXIS_TYPE_Z = 3,
	SQEX_TAIL_TWIST_MESH_AXIS_TYPE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_CalcScaleType : uint8
{
	ESQEX_CalcScaleType_Local = 0,
	ESQEX_CalcScaleType_World = 1,
	ESQEX_CalcScaleType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_MeshSetIndexType : uint8
{
	ESQEX_MeshSetIndexType_Instance = 0,
	ESQEX_MeshSetIndexType_TypeData = 1,
	ESQEX_MeshSetIndexType_External = 2,
	ESQEX_MeshSetIndexType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_2D_FLUID_CAMERA_FACING_TYPE : uint8
{
	ESQEX_2D_FLUID_CAMERA_FACING_TYPE_CAMERA_BILLBOARD = 0,
	ESQEX_2D_FLUID_CAMERA_FACING_TYPE_X_CAMERA_BILLBOARD = 1,
	ESQEX_2D_FLUID_CAMERA_FACING_TYPE_Y_CAMERA_BILLBOARD = 2,
	ESQEX_2D_FLUID_CAMERA_FACING_TYPE_Z_CAMERA_BILLBOARD = 3,
	ESQEX_2D_FLUID_CAMERA_FACING_TYPE_NONE = 4,
	ESQEX_2D_FLUID_CAMERA_FACING_TYPE_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_2D_FLUID_COMPUTE_TYPE : uint8
{
	ESQEX_2D_FLUID_COMPUTE_TYPE_CPU = 0,
	ESQEX_2D_FLUID_COMPUTE_TYPE_GPU = 1,
	ESQEX_2D_FLUID_COMPUTE_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_DYNAMIC_SHAPE_TYPE : uint8
{
	ESQEX_DYNAMIC_SHAPE_TYPE_Spring = 0,
	ESQEX_DYNAMIC_SHAPE_TYPE_TYPE_Debug = 1,
	ESQEX_DYNAMIC_SHAPE_TYPE_MAX   = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_GPU_CHECK_RADIUS_TYPE : uint8
{
	ESQEX_GPU_CHECK_RADIUS_TYPE_CheckRange1 = 0,
	ESQEX_GPU_CHECK_RADIUS_TYPE_CheckRange2 = 1,
	ESQEX_GPU_CHECK_RADIUS_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_GPU_PARTICLE_MOVE_TYPE : uint8
{
	ESQEX_GPU_PARTICLE_MOVE_TYPE_NONE = 0,
	ESQEX_GPU_PARTICLE_MOVE_TYPE_LOCATION = 1,
	ESQEX_GPU_PARTICLE_MOVE_TYPE_VELOCITY = 2,
	ESQEX_GPU_PARTICLE_MOVE_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_GPU_PARTICLE_LOOK_TYPE : uint8
{
	ESQEX_GPU_PARTICLE_LOOK_TYPE_VIEW = 0,
	ESQEX_GPU_PARTICLE_LOOK_TYPE_EMITTER = 1,
	ESQEX_GPU_PARTICLE_LOOK_TYPE_LOCATION = 2,
	ESQEX_GPU_PARTICLE_LOOK_TYPE_VELOCITY = 3,
	ESQEX_GPU_PARTICLE_LOOK_TYPE_PARTICLE_DIR = 4,
	ESQEX_GPU_PARTICLE_LOOK_TYPE_MOVE_L_IDLING_P = 5,
	ESQEX_GPU_PARTICLE_LOOK_TYPE_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_GPU_PARTICLE_LOD_CHECK_TYPE : uint8
{
	ESQEX_GPU_PARTICLE_LOD_CHECK_EMITTER_LENGTH = 0,
	ESQEX_GPU_PARTICLE_LOD_CHECK_CAMERA_LENGTH = 1,
	ESQEX_GPU_PARTICLE_LOD_CHECK_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_GPU_PARTICLE_TYPE : uint8
{
	ESQEX_GPU_PARTICLE_TYPE_SPRITE = 0,
	ESQEX_GPU_PARTICLE_TYPE_MESH = 1,
	ESQEX_GPU_PARTICLE_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEXGrassForceType : uint8
{
	ESQEXGrassForceType_RADIAL = 0,
	ESQEXGrassForceType_CLOCKWISE = 1,
	ESQEXGrassForceType_CCLOCKWISE = 2,
	ESQEXGrassForceType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_LINE_ROAD_HISTORY_TYPE : uint8
{
	ESQEX_LINE_ROAD_HISTORY_TYPE_External = 0,
	ESQEX_LINE_ROAD_HISTORY_TYPE_MyData = 1,
	ESQEX_LINE_ROAD_HISTORY_TYPE_Debug = 2,
	ESQEX_LINE_ROAD_HISTORY_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_OMNID_LASER_SHAPE_TYPE : uint8
{
	ESQEX_OMNID_LASER_SHAPE_TYPE_SPARE = 0,
	ESQEX_OMNID_LASER_SHAPE_TYPE_MAX = 1 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_SKELETAL_MODULE_AURA_ID : uint8
{
	SQEX_SKELETAL_MODULE_AURA_ID_NONE = 0,
	SQEX_SKELETAL_MODULE_AURA_ID_ONE = 1,
	SQEX_SKELETAL_MODULE_AURA_ID_TWO = 2,
	SQEX_SKELETAL_MODULE_AURA_ID_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_SKELETAL_MESH_PARTICLE_ANIM_CHANGE_TYPE : uint8
{
	SQEX_SKELETAL_MESH_PARTICLE_ANIM_CHANGE_TYPE_LOOP = 0,
	SQEX_SKELETAL_MESH_PARTICLE_ANIM_CHANGE_TYPE_ANIM_END = 1,
	SQEX_SKELETAL_MESH_PARTICLE_ANIM_CHANGE_TYPE_LOOP_END = 2,
	SQEX_SKELETAL_MESH_PARTICLE_ANIM_CHANGE_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_SKELETAL_MESH_PARTICLE_ANIM_TYPE : uint8
{
	SQEX_SKELETAL_MESH_PARTICLE_ANIM_TYPE_NONE = 0,
	SQEX_SKELETAL_MESH_PARTICLE_ANIM_TYPE_MAX = 1 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_MARCH_SHAPE_TYPE : uint8
{
	ESQEX_SHAPE_TYPE_QUAD_AIR = 0,
	ESQEX_SHAPE_TYPE_QUAD_GROUND = 1,
	ESQEX_SHAPE_TYPE_QUAD_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_TAILPOL_UV_ROT_TYPE : uint8
{
	SQEX_TAILPOL_UV_ROT_TYPE_NONE = 0,
	SQEX_TAILPOL_UV_ROT_TYPE_RIGHT_ROT = 1,
	SQEX_TAILPOL_UV_ROT_TYPE_LIGHT_ROT = 2,
	SQEX_TAILPOL_UV_ROT_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_THUNDER_GET_TYPE : uint8
{
	SQEX_THUNDER_GET_TYPE_NONE = 0,
	SQEX_THUNDER_GET_TYPE_MY_MODULE = 1,
	SQEX_THUNDER_GET_TYPE_MY_PSC = 2,
	SQEX_THUNDER_GET_TYPE_ATTACH_BONE = 3,
	SQEX_THUNDER_GET_TYPE_EXTERNAL = 4,
	SQEX_THUNDER_GET_TYPE_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_VOXEL_INTERPOLATION_TYPE : uint8
{
	ESQEX_VOXEL_INTERPOLATION_TYPE_None = 0,
	ESQEX_VOXEL_INTERPOLATION_TYPE_EFFECT_POS = 1,
	ESQEX_VOXEL_INTERPOLATION_TYPE_EFFECT_LISET = 2,
	ESQEX_VOXEL_INTERPOLATION_TYPE_GATHER = 3,
	ESQEX_VOXEL_INTERPOLATION_TYPE_LEAVE = 4,
	ESQEX_VOXEL_INTERPOLATION_TYPE_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_VOXEL_CHECK_TYPE : uint8
{
	ESQEX_VOXEL_CHECK_TYPE_Sphere = 0,
	ESQEX_VOXEL_CHECK_TYPE_Cube = 1,
	ESQEX_VOXEL_CHECK_TYPE_CAPSULE_SHAPE = 2,
	ESQEX_VOXEL_CHECK_TYPE_BOXSPHERE_BOUND = 3,
	ESQEX_VOXEL_CHECK_TYPE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_VOXEL_RENDER_TYPE : uint8
{
	ESQEX_VOXEL_RENDER_TYPE_Sprite = 0,
	ESQEX_VOXEL_RENDER_TYPE_StaticMesh = 1,
	ESQEX_VOXEL_RENDER_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_VOXEL_COMPUTE_TYPE : uint8
{
	ESQEX_VOXEL_COMPUTE_TYPE_CPU = 0,
	ESQEX_VOXEL_COMPUTE_TYPE_GPU = 1,
	ESQEX_VOXEL_COMPUTE_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_GPUParticleReactionType : uint8
{
	ESQEX_GPUParticleReactionType_None = 0,
	ESQEX_GPUParticleReactionType_Small = 1,
	ESQEX_GPUParticleReactionType_Middle = 2,
	ESQEX_GPUParticleReactionType_Large = 3,
	ESQEX_GPUParticleReactionType_VerySmall = 4,
	ESQEX_GPUParticleReactionType_VeryLarge = 5,
	ESQEX_GPUParticleReactionType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_ATTACH_THEMES
{
	ESQEX_ATTACH_THEMES_ALWAYS = 0,
	ESQEX_ATTACH_THEMES_NO_DIVING_AT_ATTACH = 1,
	ESQEX_ATTACH_THEMES_DIVING_AT_ATTACH = 2,
	ESQEX_ATTACH_THEMES_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_ATTACH_OBJECT_NAME
{
	SQEX_ATTACH_OBJECT_OWNER = 0,
	SQEX_ATTACH_OBJECT_ATTACH_TO_OBJECT = 1,
	SQEX_ATTACH_OBJECT_ATTACH_TO_WEAPON = 2,
	SQEX_ATTACH_OBJECT_ATTACH_TO_RIGHT_HAND_WEAPON = 3,
	SQEX_ATTACH_OBJECT_ATTACH_TO_LEFT_HAND_WEAPON = 4,
	SQEX_ATTACH_OBJECT_ATTACH_TO_BOTH_HAND_WEAPON = 5,
	SQEX_ATTACH_OBJECT_ATTACH_TO_RIGHT_LEG_WEAPON = 6,
	SQEX_ATTACH_OBJECT_ATTACH_TO_LEFT_LEG_WEAPON = 7,
	SQEX_ATTACH_OBJECT_ATTACH_TO_BOTH_LEG_WEAPON = 8,
	SQEX_ATTACH_OBJECT_ATTACH_TO_ALL_WEAPON = 9,
	SQEX_ATTACH_OBJECT_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_ATTACH_EFFECT_END_TYPE
{
	ESQEX_ATTACH_EFFECT_END_TYPE_LOOPEND = 0,
	ESQEX_ATTACH_EFFECT_END_TYPE_FADEOUT = 1,
	ESQEX_ATTACH_EFFECT_END_TYPE_TIMER = 2,
	ESQEX_ATTACH_EFFECT_END_TYPE_NONE = 3,
	ESQEX_ATTACH_EFFECT_END_TYPE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_CHANGE_ANIMATION_TYPE
{
	ESQEX_CHANGE_ANIMATION_TYPE_END = 0,
	ESQEX_CHANGE_ANIMATION_TYPE_NONE = 1,
	ESQEX_CHANGE_ANIMATION_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresAreaCustonEffectsType
{
	ETresAreaCustonEffectType1 = 0,
	ETresAreaCustonEffectType2 = 1,
	ETresAreaCustonEffectType3 = 2,
	ETresAreaCustonEffectType4 = 3,
	ETresAreaCustonEffectType5 = 4,
	ETresAreaCustonEffectsType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_SplineJumpLimitType : uint8
{
	SQEX_SJLTYPE_NONE = 0,
	SQEX_SJLTYPE_RELATIVE = 1,
	SQEX_SJLTYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_RAIL_SLIDE_TYPE : uint8
{
	SQEX_RS_TYPE_NORMAL = 0,
	SQEX_RS_TYPE_ATTRACTION = 1,
	SQEX_RS_TYPE_GIMMICK = 2,
	SQEX_RS_TYPE_EX01 = 3,
	SQEX_RS_TYPE_EX02 = 4,
	SQEX_RS_TYPE_EX03 = 5,
	SQEX_RS_TYPE_EX04 = 6,
	SQEX_RS_TYPE_EX05 = 7,
	SQEX_RS_TYPE_EX06 = 8,
	SQEX_RS_TYPE_EX07 = 9,
	SQEX_RS_TYPE_EX08 = 10,
	SQEX_RS_TYPE_EX09 = 11,
	SQEX_RS_TYPE_EX10 = 12,
	SQEX_RS_TYPE_EX11 = 13,
	SQEX_RS_TYPE_EX12 = 14,
	SQEX_RS_TYPE_EX13 = 15,
	SQEX_RS_TYPE_EX14 = 16,
	SQEX_RS_TYPE_EX15 = 17,
	SQEX_RS_TYPE_EX16 = 18,
	SQEX_RS_TYPE_MAX = 19 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_RAIL_SLIDE_DIR : uint8
{
	SQEX_RS_DIR_BOTH = 0,
	SQEX_RS_DIR_FORWORD = 1,
	SQEX_RS_DIR_REVERSE = 2,
	SQEX_RS_DIR_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETIMELINE_PROPERTY_BIND_TYPE : uint8
{
	TIMELINE_PROPERTY_BIND_TYPE_NONE = 0,
	TIMELINE_PROPERTY_BIND_TYPE_INT = 1,
	TIMELINE_PROPERTY_BIND_TYPE_FLOAT = 2,
	TIMELINE_PROPERTY_BIND_TYPE_BOOL = 3,
	TIMELINE_PROPERTY_BIND_TYPE_VECTOR = 4,
	TIMELINE_PROPERTY_BIND_TYPE_VECTOR_X = 5,
	TIMELINE_PROPERTY_BIND_TYPE_VECTOR_Y = 6,
	TIMELINE_PROPERTY_BIND_TYPE_VECTOR_Z = 7,
	TIMELINE_PROPERTY_BIND_TYPE_ROTATION = 8,
	TIMELINE_PROPERTY_BIND_TYPE_ROTATION_Pitch = 9,
	TIMELINE_PROPERTY_BIND_TYPE_ROTATION_Yaw = 10,
	TIMELINE_PROPERTY_BIND_TYPE_ROTATION_Roll = 11,
	TIMELINE_PROPERTY_BIND_TYPE_COLOR = 12,
	TIMELINE_PROPERTY_BIND_TYPE_COLOR_R = 13,
	TIMELINE_PROPERTY_BIND_TYPE_COLOR_G = 14,
	TIMELINE_PROPERTY_BIND_TYPE_COLOR_B = 15,
	TIMELINE_PROPERTY_BIND_TYPE_COLOR_A = 16,
	TIMELINE_PROPERTY_BIND_TYPE_STRUCT = 17,
	TIMELINE_PROPERTY_BIND_TYPE_STRING = 18,
	TIMELINE_PROPERTY_BIND_TYPE_NAME = 19,
	TIMELINE_PROPERTY_BIND_TYPE_ENUM = 20,
	TIMELINE_PROPERTY_BIND_TYPE_DISTRIBUTION = 21,
	TIMELINE_PROPERTY_BIND_TYPE_OBJECT = 22,
	TIMELINE_PROPERTY_BIND_TYPE_MAX = 23 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_Invoker : uint8
{
	Native = 0,
	Blueprint = 1,
	Level = 2,
	LevelActorSelect = 3,
	LSI = 4,
	LightTick = 5,
	ReceiveTick = 6,
	LevelOptimizationMan = 7,
	Clip = 8,
	GameWorld = 9,
	Tutorial = 10,
	GimmickPauseSpecial = 11,
	CollisionRoutine = 12,
	GameOver = 13,
	Volume = 14,
	Movie = 15,
	Mapset = 16,
	Max = 17 UMETA(Hidden),
	ESQEX_MAX = 18 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_PARTICLE_BOX_COLL_HIT_TYPE : uint8
{
	SQEX_PARTICLE_BOX_COLL_HIT_TYPE_SLIP = 0,
	SQEX_PARTICLE_BOX_COLL_HIT_TYPE_MAX = 1 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_SPHERE_COLL_HIT_ON_NOISEL_TYPE : uint8
{
	SQEX_SPHERE_COLL_HIT_ON_NOISEL_TYPE_NONE = 0,
	SQEX_SPHERE_COLL_HIT_ON_NOISEL_TYPE_NOISE = 1,
	SQEX_SPHERE_COLL_HIT_ON_NOISEL_TYPE_NOISE_INTERNAL = 2,
	SQEX_SPHERE_COLL_HIT_ON_NOISEL_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_PARTICLE_SPHERE_COLL_HIT_TYPE : uint8
{
	SQEX_PARTICLE_SPHERE_COLL_HIT_TYPE_SLIP = 0,
	SQEX_PARTICLE_SPHERE_COLL_HIT_TYPE_REFLECTION = 1,
	SQEX_PARTICLE_SPHERE_COLL_HIT_TYPE_REFLECTION_INTERNAL = 2,
	SQEX_PARTICLE_SPHERE_COLL_HIT_TYPE_ABSORPTION = 3,
	SQEX_PARTICLE_SPHERE_COLL_HIT_TYPE_ABSORPTION_INTERNAL = 4,
	SQEX_PARTICLE_SPHERE_COLL_HIT_TYPE_SLIP_AND_GRAVITY = 5,
	SQEX_PARTICLE_SPHERE_COLL_HIT_TYPE_PRIORITY_PARTIELE = 6,
	SQEX_PARTICLE_SPHERE_COLL_HIT_TYPE_GPUMeshReaction = 7,
	SQEX_PARTICLE_SPHERE_COLL_HIT_TYPE_TEST = 8,
	SQEX_PARTICLE_SPHERE_COLL_HIT_TYPE_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_PARTICLE_UV_ROT_TYPE : uint8
{
	SQEX_PARTICLE_UV_ROT_TYPE_NONE = 0,
	SQEX_PARTICLE_UV_ROT_TYPEE_RIGHT_ROT = 1,
	SQEX_PARTICLE_UV_ROT_TYPE_LIGHT_ROT = 2,
	SQEX_PARTICLE_UV_ROT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_FILTER_TYPE : uint8
{
	ESQEX_FILTER_TYPE_ALPHA = 0,
	ESQEX_FILTER_TYPE_ADD = 1,
	ESQEX_FILTER_TYPE_SUB = 2,
	ESQEX_FILTER_TYPE_NPR = 3,
	ESQEX_FILTER_TYPE_GRAY = 4,
	ESQEX_FILTER_TYPE_HDR_ALPHA = 5,
	ESQEX_FILTER_TYPE_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_VFX_STATE : uint8
{
	ESQEX_VFX_STATE_START = 0,
	ESQEX_VFX_STATE_PLAY = 1,
	ESQEX_VFX_STATE_END = 2,
	ESQEX_VFX_STATE_END_WAITING = 3,
	ESQEX_VFX_STATE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_PARTICLE_AVOID : uint8
{
	ESQEX_PARTICLE_AVOID_CHANGE_LOCATION = 0,
	ESQEX_PARTICLE_AVOID_CHANGE_SIZE_SCLAE = 1,
	ESQEX_PARTICLE_AVOID_CHANGE_SIZE_FADE = 2,
	ESQEX_PARTICLE_AVOID_CHANGE_SIZE_SCALE_AND_FADE = 3,
	ESQEX_PARTICLE_AVOID_CHANGE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESqExEffectUseType : uint8
{
	ESQEX_EFFECTTYPE_USE_NONE = 0,
	ESQEX_EFFECTTYPE_USE_PLAYER = 1,
	ESQEX_EFFECTTYPE_USE_ENEMEY = 2,
	ESQEX_EFFECTTYPE_USE_GIMMICK = 3,
	ESQEX_EFFECTTYPE_USE_MAP = 4,
	ESQEX_EFFECTTYPE_USE_MINIGAME = 5,
	ESQEX_EFFECTTYPE_USE_OTHER = 6,
	ESQEX_EFFECTTYPE_USE_EVENT = 7,
	ESQEX_EFFECTTYPE_USE_NPC = 8,
	ESQEX_EFFECTTYPE_USE_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESqExEffectTask : uint8
{
	ESQEX_EFFECTTASK_NONE = 0,
	ESQEX_EFFECTTASK_TEST = 1,
	ESQEX_EFFECTTASK_INTERIM_FIX = 2,
	ESQEX_EFFECTTASK_FIX = 3,
	ESQEX_EFFECTTASK_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESqExEffectAttribute : uint8
{
	ESQEX_PARTICALE_ATTRIBUTE_NONE = 0,
	ESQEX_PARTICALE_ATTRIBUTE_FIRE = 1,
	ESQEX_PARTICALE_ATTRIBUTE_WATER = 2,
	ESQEX_PARTICALE_ATTRIBUTE_SOIL = 3,
	ESQEX_PARTICALE_ATTRIBUTE_WIND = 4,
	ESQEX_PARTICALE_ATTRIBUTE_ICE = 5,
	ESQEX_PARTICALE_ATTRIBUTE_DARKNESS = 6,
	ESQEX_PARTICALE_ATTRIBUTE_HOLY = 7,
	ESQEX_PARTICALE_ATTRIBUTE_THUNDER = 8,
	ESQEX_PARTICALE_ATTRIBUTE_PHYSICAL = 9,
	ESQEX_PARTICALE_ATTRIBUTE_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESqExParticleAssetResponsible : uint8
{
	ESQEX_PA_RESPONSIBLE_00 = 0,
	ESQEX_PA_RESPONSIBLE_01 = 1,
	ESQEX_PA_RESPONSIBLE_02 = 2,
	ESQEX_PA_RESPONSIBLE_03 = 3,
	ESQEX_PA_RESPONSIBLE_04 = 4,
	ESQEX_PA_RESPONSIBLE_05 = 5,
	ESQEX_PA_RESPONSIBLE_06 = 6,
	ESQEX_PA_RESPONSIBLE_07 = 7,
	ESQEX_PA_RESPONSIBLE_08 = 8,
	ESQEX_PA_RESPONSIBLE_09 = 9,
	ESQEX_PA_RESPONSIBLE = 10,
	ESQEX_PA_RESPONSIBLE01 = 11,
	ESQEX_PA_RESPONSIBLE02 = 12,
	ESQEX_PA_RESPONSIBLE03 = 13,
	ESQEX_PA_RESPONSIBLE04 = 14,
	ESQEX_PA_RESPONSIBLE05 = 15,
	ESQEX_PA_RESPONSIBLE06 = 16,
	ESQEX_PA_RESPONSIBLE07 = 17,
	ESQEX_PA_RESPONSIBLE08 = 18,
	ESQEX_PA_RESPONSIBLE09 = 19,
	ESQEX_PA_RESPONSIBLE10 = 20,
	ESQEX_PA_RESPONSIBLE11 = 21,
	ESQEX_PA_RESPONSIBLE12 = 22,
	ESQEX_PA_RESPONSIBLE13 = 23,
	ESQEX_PA_RESPONSIBLE14 = 24,
	ESQEX_PA_RESPONSIBLE15 = 25,
	ESQEX_PA_RESPONSIBLE16 = 26,
	ESQEX_PA_RESPONSIBLE17 = 27,
	ESQEX_PA_RESPONSIBLE18 = 28,
	ESQEX_PA_RESPONSIBLE19 = 29,
	ESQEX_PA_RESPONSIBLE20 = 30,
	ESQEX_PA_RESPONSIBLE21 = 31,
	ESQEX_PA_RESPONSIBLE22 = 32,
	ESQEX_PA_RESPONSIBLE23 = 33,
	ESQEX_PA_RESPONSIBLE24 = 34,
	ESQEX_PA_RESPONSIBLE25 = 35,
	ESQEX_PA_RESPONSIBLE26 = 36,
	ESQEX_PA_RESPONSIBLE27 = 37,
	ESQEX_PA_RESPONSIBLE28 = 38,
	ESQEX_PA_RESPONSIBLE29 = 39,
	ESQEX_PA_RESPONSIBLE30 = 40,
	ESQEX_PA_RESPONSIBLE31 = 41,
	ESQEX_PA_RESPONSIBLE_MAX = 42 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_AUTODEBUG_INPUT_TYPE
{
	SQEX_AUTODEBUG_INPUT_TYPE_Decide = 0,
	SQEX_AUTODEBUG_INPUT_TYPE_Cancel = 1,
	SQEX_AUTODEBUG_INPUT_TYPE_PadS_LX = 2,
	SQEX_AUTODEBUG_INPUT_TYPE_PadS_LY = 3,
	SQEX_AUTODEBUG_INPUT_TYPE_PadS_RX = 4,
	SQEX_AUTODEBUG_INPUT_TYPE_PadS_RY = 5,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_U = 6,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_D = 7,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_L = 8,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_R = 9,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_L1 = 10,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_L2 = 11,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_L3 = 12,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_R1 = 13,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_R2 = 14,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_R3 = 15,
	SQEX_AUTODEBUG_INPUT_TYPE_PadD_U = 16,
	SQEX_AUTODEBUG_INPUT_TYPE_PadD_D = 17,
	SQEX_AUTODEBUG_INPUT_TYPE_PadD_L = 18,
	SQEX_AUTODEBUG_INPUT_TYPE_PadD_R = 19,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_Select = 20,
	SQEX_AUTODEBUG_INPUT_TYPE_PadB_Start = 21,
	SQEX_AUTODEBUG_INPUT_TYPE_Max  = 22 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_POLYGON_MAKER_STEP : uint8
{
	SQEX_POLYGON_MAKER_STEP_NONE = 0,
	SQEX_POLYGON_MAKER_STEP_GENERATE = 1,
	SQEX_POLYGON_MAKER_STEP_SHOOT_MODE = 2,
	SQEX_POLYGON_MAKER_STEP_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_PARTICLE_AROUND_MODE : uint8
{
	SQEX_PARTICLE_AROUND_MODE_NORMAL = 0,
	SQEX_PARTICLE_AROUND_MODE_AROUND = 1,
	SQEX_PARTICLE_AROUND_MODE_NORMALRETURN = 2,
	SQEX_PARTICLE_AROUND_MODE_MAX  = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_VOXEL_CELL_CHANGE_CHECK_TYPE : uint8
{
	SQEX_CELL_BREAK_CHECK_TYPE_ALL = 0,
	SQEX_CELL_BREAK_CHECK_TYPE_SHPERE = 1,
	SQEX_CELL_BREAK_CHECK_TYPE_BOX = 2,
	SQEX_CELL_BREAK_CHECK_TYPE_HEIGHT = 3,
	SQEX_CELL_BREAK_CHECK_TYPE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_VOXEL_CELL_TYPE : uint8
{
	SQEX_VOXEL_CELL_TYPE_Normal = 0,
	SQEX_VOXEL_CELL_TYPE_Break = 1,
	SQEX_VOXEL_CELL_TYPE_Gather = 2,
	SQEX_VOXEL_CELL_TYPE_SphereGather = 3,
	SQEX_VOXEL_CELL_TYPE_SimpleToNormal = 4,
	SQEX_VOXEL_CELL_TYPE_NoVisible = 5,
	SQEX_VOXEL_CELL_TYPE_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_VOXEL_CELL_CHANGE_CONDITIONS : uint8
{
	SQEX_CELL_CHANGE_CONDITIONS_Forced = 0,
	SQEX_CELL_CHANGE_CONDITIONS_Check = 1,
	SQEX_CELL_CHANGE_CONDITIONS_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_MESH_PAR_BILLBORAD_TYPE : uint8
{
	ESQEX_MESH_PAR_BILLBORAD_TYPE_NONE = 0,
	ESQEX_MESH_PAR_BILLBORAD_TYPE_CAMERA_BILLBOARD = 1,
	ESQEX_MESH_PAR_BILLBORAD_TYPE_X_CAMERA_BILLBOARD = 2,
	ESQEX_MESH_PAR_BILLBORAD_TYPE_Y_CAMERA_BILLBOARD = 3,
	ESQEX_MESH_PAR_BILLBORAD_TYPE_Z_CAMERA_BILLBOARD = 4,
	ESQEX_MESH_PAR_BILLBORAD_TYPE_SCREEN_BILLBOARD = 5,
	ESQEX_MESH_PAR_BILLBORAD_TYPE_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresScreenEffectPriority : uint8
{
	ScreenEffectPriority_Lowest = 0,
	ScreenEffectPriority_Low = 1,
	ScreenEffectPriority_Normal = 2,
	ScreeneEffectPriority_Hi = 3,
	ScreenEffectPriority_Highest = 4,
	ScreenEffectPriorityMax = 5 UMETA(Hidden),
	ETresScreenEffectPriority_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESqexLensFlareBlendMode : uint8
{
	SQEX_LENS_FLARE_BLEND_MODE_ADD = 0,
	SQEX_LENS_FLARE_BLEND_MODE_BLEND = 1,
	SQEX_LENS_FLARE_BLEND_MODE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESqexDiffusionMode : uint8
{
	SQEX_DIFFUSION_MODE_FULL_SCREEN = 0,
	SQEX_DIFFUSION_MODE_DIFFUSON_ONLY = 1,
	SQEX_DIFFUSION_MODE_DIFFUSON_AND_EXSTRA = 2,
	SQEX_DIFFUSION_MODE__MAX = 3 UMETA(Hidden),
	SQEX_DIFFUSION_MODE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESqexRadialBlurMode : uint8
{
	SQEX_RADIAL_BLUR_MODE_RADIAL = 0,
	SQEX_RADIAL_BLUR_MODE_LINEAR = 1,
	SQEX_RADIAL_BLUR_MODE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresKHSMaterialParameterIDVectorType : uint8
{
	KHSM_V_InLightCenterPosition = 0,
	KHSM_V_InLightColor = 1,
	KHSM_V_InLightOutColor = 2,
	KHSM_V_AuraColor = 3,
	KHSM_V_AuraOutColor = 4,
	KHSM_V_TypeMax = 5 UMETA(Hidden),
	KHSM_V_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresKHSMaterialParameterIDScalarType : uint8
{
	KHSM_S_InLight = 0,
	KHSM_S_InWater = 1,
	KHSM_S_Lockon = 2,
	KHSM_S_Wetness = 3,
	KHSM_S_Aura = 4,
	KHSM_S_WetnessLength = 5,
	KHSM_S_InOcean = 6,
	KHSM_S_OceanHeight = 7,
	KHSM_S_TypeMax = 8 UMETA(Hidden),
	KHSM_S_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_ResidentLevel : uint8
{
	Full = 0,
	Minus = 1,
	Minus01 = 2,
	Minus02 = 3,
	Minus03 = 4,
	Minus04 = 5,
	Minus05 = 6,
	Minus06 = 7,
	Minus07 = 8,
	Minus08 = 9,
	Minus09 = 10,
	Minus10 = 11,
	Minus11 = 12,
	Minus12 = 13,
	Minus13 = 14,
	Ignore = 15,
	ESQEX_MAX = 16 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESQEX_WorldDeepDiveSetting : uint8
{
	NORMAL = 0,
	REVERSE = 1,
	DISABLE = 2,
	ESQEX_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EViewTargetBlendInterpYaw
{
	VTBInterpYaw_None = 0,
	VTBInterpYaw_Left = 1,
	VTBInterpYaw_Right = 2,
	VTBInterpYaw_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EViewTargetBlendInterp
{
	VTBInterp_Normal = 0,
	VTBInterp_LookLocation = 1,
	VTBInterp_LookRotationDistance = 2,
	VTBInterp_MAX = 3 UMETA(Hidden)
};

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------
USTRUCT(BlueprintType)
struct FSQEX_EffectAutoDebugData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectAutoDebugData")
	TArray<class USQEX_AutoEffectDebugDataBase*> CommandDatas;
};

USTRUCT(BlueprintType)
struct FSQEX_AutoEffectDebugInputData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AutoEffectDebugInputData")
	TEnumAsByte<ESQEX_AUTODEBUG_INPUT_TYPE> InputType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AutoEffectDebugInputData")
	TEnumAsByte<EInputEvent> InputEvent;
};

USTRUCT(BlueprintType)
struct FSQEX_EffectAssetListData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectAssetListData")
	FString AssetPath;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectAssetListData")
	FString AssetName;
};

USTRUCT(BlueprintType)
struct FSQEX_AttachObjectData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachObjectData")
	TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> AttachType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachObjectData")
	FName ObjectSearchSocketName;
};

USTRUCT(BlueprintType)
struct FSQEX_AttachEffectData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	int GroupID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	bool bCheckEndGroupID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	int EndGroupID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	class UParticleSystem* AttachEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	FName CustomAttachName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	bool UseAttachObjectData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	struct FSQEX_AttachObjectData AttachObjectData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	bool bUseAreaEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	TEnumAsByte<ETresAreaCustonEffectsType> AreaEffectType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	bool bNoCleanupTarget;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectData")
	FGuid DataGuid;
};

USTRUCT(BlueprintType)
struct FSQEX_StructParticleAttachData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	FString Description;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	TEnumAsByte<ESQEX_ATTACH_THEMES> AttachThemes;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	bool bUseCommonEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	TArray<struct FSQEX_AttachEffectData> EffectDataList;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	int PlayNumber;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	TEnumAsByte<ESQEX_CHANGE_ANIMATION_TYPE> WhenChangeAnimationType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	TEnumAsByte<ESQEX_ATTACH_EFFECT_END_TYPE> AttachEffectEndType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	float FadeIn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	float FadeOut;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	float StartDelayTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	float EndDelayTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	bool ToAttach;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	bool DetachAtEnd;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	bool bAbsoluteLocation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	bool bAbsoluteRotation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	bool bAbsoluteScale;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	bool bUseCameraPositon;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	float FieldOfView;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	bool bAllowMultipleInstances;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	FName SocketName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	FName EndSocketName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	FVector LocationOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	FRotator RotationOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	FVector ScaleOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	FVector ParticleColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	float ParticleAlpha;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	bool bOnCastShadow;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	bool bTakeoverAttachObjectVisible;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_StructParticleAttachData")
	FGuid DataGuid;
};

USTRUCT(BlueprintType)
struct FSQEX_ParticleSpawnVertexData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_ParticleSpawnVertexData")
	FVector VertexPos;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_ParticleSpawnVertexData")
	FVector VertexNormal;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_ParticleSpawnVertexData")
	FColor VertexColor;
};

USTRUCT(BlueprintType)
struct FSQEX_PARTICLE_VOXEL_VERTEX_INDEX_DATA
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_PARTICLE_VOXEL_VERTEX_INDEX_DATA")
	TArray<int> VoxelVertexIndexList;
};

USTRUCT(BlueprintType)
struct FSQEX_VertexModule_VertexData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_VertexModule_VertexData")
	FVector VertexPos;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_VertexModule_VertexData")
	FVector VertexNormal;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_VertexModule_VertexData")
	FColor VertexColor;
};

USTRUCT(BlueprintType)
struct FSQEX_SMCapsuleShadowElem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_SMCapsuleShadowElem")
	FVector m_Center;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_SMCapsuleShadowElem")
	FRotator m_Rotation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_SMCapsuleShadowElem")
	float m_Radius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_SMCapsuleShadowElem")
	float m_Length;
};

USTRUCT(BlueprintType)
struct FSQEX_AttachTypeDataStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachTypeDataStruct")
	TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> AttachType;
};

USTRUCT(BlueprintType)
struct FSQEX_AttachEffectNotifyDataToMetaAttachData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectNotifyDataToMetaAttachData")
	TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> AttachType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectNotifyDataToMetaAttachData")
	FName SocketName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectNotifyDataToMetaAttachData")
	TArray<struct FSQEX_StructParticleAttachData> MetaAttachData;
};

USTRUCT(BlueprintType)
struct FSQEX_AttachEffectNotifyDataToDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectNotifyDataToDataAsset")
	bool bUseCommonAttachData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectNotifyDataToDataAsset")
	int GroupID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectNotifyDataToDataAsset")
	TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> AttachType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectNotifyDataToDataAsset")
	FName SocketName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_AttachEffectNotifyDataToDataAsset")
	TArray<class USQEX_ParticleAttachDataAsset*> AttachDatas;
};

USTRUCT(BlueprintType)
struct FViewTargetTransitionParamsEx
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FViewTargetTransitionParamsEx")
	struct FViewTargetTransitionParams TransitionParams;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FViewTargetTransitionParamsEx")
	TEnumAsByte<EViewTargetBlendInterp> BlendInterp;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FViewTargetTransitionParamsEx")
	TEnumAsByte<EViewTargetBlendInterpYaw> BlendInterpYaw;
};