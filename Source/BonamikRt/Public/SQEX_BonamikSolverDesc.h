#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikFpsCorrectionDesc.h"
#include "SQEX_BonamikSolverDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikSolverDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 m_GroupID;
    
    UPROPERTY(VisibleAnywhere)
    FString m_GroupName;
    
    UPROPERTY()
    bool m_IsEnable;
    
    UPROPERTY()
    bool m_IsUseConeSEQ;
    
    UPROPERTY()
    bool m_IsEnableDraw;
    
    UPROPERTY()
    uint32 m_ColIter;
    
    UPROPERTY()
    uint32 m_ConsIter;
    
    UPROPERTY()
    uint32 m_ConeIter;
    
    UPROPERTY()
    uint32 m_LinkIter;
    
    UPROPERTY()
    uint32 m_SolverIter;
    
    UPROPERTY()
    uint32 m_TagId;
    
    UPROPERTY()
    uint32 m_CollisionTagId;
    
    UPROPERTY()
    bool m_EnableGround;
    
    UPROPERTY()
    float m_LODdistance;
    
    UPROPERTY()
    int32 m_RefUpVec;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_BonamikFpsCorrectionDesc> m_FpsCorrection;
    
    BONAMIKRT_API FSQEX_BonamikSolverDesc();
};

