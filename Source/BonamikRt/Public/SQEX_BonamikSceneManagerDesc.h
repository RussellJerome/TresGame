#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_JointLinkSimulationMode.h"
#include "ESQEX_Bonamik_FastMotionHandling.h"
#include "SQEX_BonamikFpsCorrectionDesc.h"
#include "SQEX_BonamikSceneManagerDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikSceneManagerDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_IsEnable;
    
    UPROPERTY()
    bool m_IsUseGPU;
    
    UPROPERTY(VisibleAnywhere)
    uint32 m_SubStep;
    
    UPROPERTY()
    float m_Dt;
    
    UPROPERTY()
    uint32 m_TotalGroup;
    
    UPROPERTY()
    FString m_GroupName[48];
    
    UPROPERTY()
    bool m_IsEnableLSS;
    
    UPROPERTY()
    float m_LSScoeff_tran;
    
    UPROPERTY()
    float m_LSScoeff_rot;
    
    UPROPERTY()
    FString m_RootName;
    
    UPROPERTY()
    bool m_IsEnableLocalForce;
    
    UPROPERTY()
    FVector m_Gravity;
    
    UPROPERTY()
    FVector m_WindForce;
    
    UPROPERTY()
    FVector m_DirRange;
    
    UPROPERTY()
    FVector m_ForceRange;
    
    UPROPERTY()
    uint32 m_TotalLinkBatches;
    
    UPROPERTY()
    uint32 m_TotalLinksInBatch[15];
    
    UPROPERTY()
    uint32 m_TotalConeBatches;
    
    UPROPERTY()
    uint32 m_TotalConesInBatch[15];
    
    UPROPERTY()
    uint32 m_TotalCollisionBatches;
    
    UPROPERTY()
    uint32 m_TotalCollisionsInBatch[15];
    
    UPROPERTY()
    uint32 m_TotalSelfCollisionBatches;
    
    UPROPERTY()
    uint32 m_TotalSelfCollisionsInBatch[15];
    
    UPROPERTY()
    TEnumAsByte<ESQEX_Bonamik_JointLinkSimulationMode> m_JointLinkSimulationMode;
    
    UPROPERTY()
    TEnumAsByte<ESQEX_Bonamik_FastMotionHandling> m_FastMotionHandlingMode;
    
    UPROPERTY()
    bool m_EnableGroundCollision;
    
    UPROPERTY()
    uint32 m_RefUpVec;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_BonamikFpsCorrectionDesc> m_FpsCorrection;
    
    BONAMIKRT_API FSQEX_BonamikSceneManagerDesc();
};

