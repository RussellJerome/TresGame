#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikPlaneDesc.h"
#include "SQEX_BonamikLinkDesc.h"
#include "Engine/DataAsset.h"
#include "SQEX_BonamikSceneManagerDesc.h"
#include "SQEX_BonamikSolverDesc.h"
#include "SQEX_BonamikBodyDesc.h"
#include "SQEX_BonamikShapeMatchingDesc.h"
#include "SQEX_BonamikGroupLOD.h"
#include "SQEX_BonamikAsset.generated.h"

class USkeletalMesh;

UCLASS()
class BONAMIKRT_API USQEX_BonamikAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_SkeletalMesh;
    
    UPROPERTY(VisibleAnywhere)
    uint32 m_VersionNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEX_BonamikSceneManagerDesc m_SceneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_BonamikSolverDesc> m_Solvers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_BonamikBodyDesc> m_Bodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_BonamikLinkDesc> m_Links;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_BonamikPlaneDesc> m_Planes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_BonamikShapeMatchingDesc> m_ShapeMatchings;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalKinematics;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalConstraints;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalCones;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalLinks;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalCollisions;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalSelfCollisions;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalChainRootParticles;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalPCLinkCones;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalLateralLinkCones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAlwaysUse60FPSsetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_IgnoreEffectors;
    
    UPROPERTY(EditAnywhere)
    float m_TeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_BonamikReferenceGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ReferenceGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_BonamikCheckGroundBodyPosGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_CheckGroundBodyPosGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_BonamikGroupLOD> m_BonamikGroupLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BonamikAccurateBoundsUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PreRollStepOnResume;
    
    USQEX_BonamikAsset();
};

