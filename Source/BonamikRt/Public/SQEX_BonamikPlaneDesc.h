#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikPlaneDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikPlaneDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 m_GroupID;
    
    UPROPERTY()
    FString m_ParticleAName;
    
    UPROPERTY()
    FString m_ParticleBName;
    
    UPROPERTY()
    FString m_ParticleCName;
    
    UPROPERTY()
    int32 m_ParticleA;
    
    UPROPERTY()
    int32 m_ParticleB;
    
    UPROPERTY()
    int32 m_ParticleC;
    
    UPROPERTY()
    uint32 m_Index;
    
    UPROPERTY()
    float m_Thickness;
    
    UPROPERTY()
    float m_Offset;
    
    UPROPERTY()
    bool m_IsCollision;
    
    UPROPERTY()
    int32 m_CollisionBatchNo;
    
    UPROPERTY()
    int32 m_ColId[8];
    
    BONAMIKRT_API FSQEX_BonamikPlaneDesc();
};

