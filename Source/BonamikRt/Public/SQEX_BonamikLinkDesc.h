#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_LinkType.h"
#include "SQEX_BonamikLinkDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikLinkDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString m_ParentBodyName;
    
    UPROPERTY()
    FString m_ChildBodyName;
    
    UPROPERTY()
    uint32 m_ParentId;
    
    UPROPERTY()
    uint32 m_ChildId;
    
    UPROPERTY()
    TEnumAsByte<ESQEX_Bonamik_LinkType> m_LinkType;
    
    UPROPERTY()
    bool m_IsSelfCollision;
    
    UPROPERTY()
    bool m_EnableJointTwist;
    
    UPROPERTY()
    bool m_EnableCone;
    
    UPROPERTY()
    bool m_EnableConeAnimation;
    
    UPROPERTY()
    float m_LinkStr;
    
    UPROPERTY()
    float m_LinkParentStr;
    
    UPROPERTY()
    float m_ConeInnerStr;
    
    UPROPERTY()
    float m_ConeOuterStr;
    
    UPROPERTY()
    float m_ConeParentStr;
    
    UPROPERTY()
    float m_LimitY;
    
    UPROPERTY()
    float m_LimitZ;
    
    UPROPERTY()
    float m_ConeOffsetY;
    
    UPROPERTY()
    float m_ConeOffsetZ;
    
    UPROPERTY()
    float m_LimitOffsetY;
    
    UPROPERTY()
    float m_LimitOffsetZ;
    
    UPROPERTY()
    bool m_IsCollisionReceiver;
    
    UPROPERTY()
    bool m_IsCollisionRepulsor;
    
    UPROPERTY()
    bool m_IsLRA;
    
    UPROPERTY()
    float m_LRAstr;
    
    UPROPERTY()
    float m_LRAdamping;
    
    UPROPERTY()
    uint32 m_LinkBatchNo;
    
    UPROPERTY()
    uint32 m_ConeBatchNo;
    
    UPROPERTY()
    uint32 m_CollisionBatchNo;
    
    UPROPERTY()
    float m_PinRadius;
    
    UPROPERTY()
    float m_PinStr;
    
    UPROPERTY()
    float m_KdiTrans;
    
    UPROPERTY()
    float m_KdiRot;
    
    UPROPERTY()
    float m_ConcaveRatio;
    
    BONAMIKRT_API FSQEX_BonamikLinkDesc();
};

