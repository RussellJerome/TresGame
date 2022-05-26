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
    UPROPERTY()
    USkeletalMesh* m_SkeletalMesh;
    
    UPROPERTY(VisibleAnywhere)
    uint32 m_VersionNo;
    
    UPROPERTY(EditAnywhere)
    FSQEX_BonamikSceneManagerDesc m_SceneManager;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_BonamikSolverDesc> m_Solvers;
    
    UPROPERTY()
    TArray<FSQEX_BonamikBodyDesc> m_Bodies;
    
    UPROPERTY()
    TArray<FSQEX_BonamikLinkDesc> m_Links;
    
    UPROPERTY()
    TArray<FSQEX_BonamikPlaneDesc> m_Planes;
    
    UPROPERTY()
    TArray<FSQEX_BonamikShapeMatchingDesc> m_ShapeMatchings;
    
    UPROPERTY()
    uint32 m_TotalKinematics;
    
    UPROPERTY()
    uint32 m_TotalConstraints;
    
    UPROPERTY()
    uint32 m_TotalCones;
    
    UPROPERTY()
    uint32 m_TotalLinks;
    
    UPROPERTY()
    uint32 m_TotalCollisions;
    
    UPROPERTY()
    uint32 m_TotalSelfCollisions;
    
    UPROPERTY()
    uint32 m_TotalChainRootParticles;
    
    UPROPERTY()
    uint32 m_TotalPCLinkCones;
    
    UPROPERTY()
    uint32 m_TotalLateralLinkCones;
    
    UPROPERTY()
    bool m_bAlwaysUse60FPSsetting;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_IgnoreEffectors;
    
    UPROPERTY(EditAnywhere)
    float m_TeleportDistance;
    
    UPROPERTY()
    FString m_BonamikReferenceGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ReferenceGroups;
    
    UPROPERTY()
    TArray<FString> m_BonamikCheckGroundBodyPosGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_CheckGroundBodyPosGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_BonamikGroupLOD> m_BonamikGroupLODs;
    
    UPROPERTY(EditAnywhere)
    bool m_BonamikAccurateBoundsUpdate;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRollStepOnResume;
    
    USQEX_BonamikAsset();
};

