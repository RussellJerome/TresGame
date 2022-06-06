#pragma once
#include "CoreMinimal.h"
#include "ETresCollision.h"
#include "ETresAtkCollLocationAttachType.h"
#include "ETresAtkCollRotAttachType.h"
#include "Engine/CollisionProfile.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETresAtkCollMapHitType.h"
#include "ETresSoundAliasLabel.h"
#include "TresAtkCollShapeAssetUnit.generated.h"

class UCurveVector;
class UStaticMesh;
class USoundBase;

USTRUCT(BlueprintType)
struct FTresAtkCollShapeAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_GrpName;
    
    UPROPERTY(EditAnywhere)
    FName m_DefaultAttackDataIDName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCollision::Type> m_ShapeType;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* m_Mesh;
    
    UPROPERTY(EditAnywhere)
    FCollisionProfileName m_CollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    ETresAtkCollLocationAttachType m_AttachType1;
    
    UPROPERTY(EditAnywhere)
    FName m_SocketName1;
    
    UPROPERTY()
    uint8 m_bSocketName1UseParentSkeleton: 1;
    
    UPROPERTY(EditAnywhere)
    FVector m_RelativeLocation1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bAbsoluteOffset1: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableLocation1Attach: 1;
    
    UPROPERTY(EditAnywhere)
    ETresAtkCollLocationAttachType m_AttachType2;
    
    UPROPERTY(EditAnywhere)
    FName m_SocketName2;
    
    UPROPERTY()
    uint8 m_bSocketName2UseParentSkeleton: 1;
    
    UPROPERTY(EditAnywhere)
    FVector m_RelativeLocation2;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bAbsoluteOffset2: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableLocation2Attach: 1;
    
    UPROPERTY(EditAnywhere)
    FVector m_Size;
    
    UPROPERTY(EditAnywhere)
    FVector m_IncSize;
    
    UPROPERTY(EditAnywhere)
    FVector m_IncMaxSize;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* m_SizeVectorCurve;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bSizeVectorCurveLoop: 1;
    
    UPROPERTY(EditAnywhere)
    FRotator m_RelativeRocation;
    
    UPROPERTY(EditAnywhere)
    ETresAtkCollRotAttachType m_RotAttachType;
    
    UPROPERTY(EditAnywhere)
    FVector m_Scale;
    
    UPROPERTY(EditAnywhere)
    FVector m_IncScale;
    
    UPROPERTY(EditAnywhere)
    FVector m_IncMaxScale;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* m_ScaleVectorCurve;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bScaleVectorCurveLoop: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableSweep: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bEnablePawnRootCollision: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bIsPhysAttackCollision: 1;
    
    UPROPERTY(EditAnywhere)
    ETresAtkCollMapHitType m_MapHitType;
    
    UPROPERTY()
    uint8 m_bEnableMapHit: 1;
    
    UPROPERTY()
    uint8 m_bDisableGround: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableTakeDamage: 1;
    
    UPROPERTY()
    uint8 m_bDisableTeamCheck: 1;
    
    UPROPERTY()
    uint8 m_bZeroDamageIfSameTeam: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableCharHit: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bIgnoreParentScale: 1;
    
    UPROPERTY(EditAnywhere)
    FName m_EffectGrpName;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_HitSEAsset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresSoundAliasLabel> m_HitSEID;
    
    TRESGAME_API FTresAtkCollShapeAssetUnit();
};

