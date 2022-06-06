#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_CollisionShape.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_ConstraintType.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_BonamikBodyDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikBodyDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 m_Index;
    
    UPROPERTY()
    FString m_JointName;
    
    UPROPERTY()
    FString m_ParentBodyName;
    
    UPROPERTY()
    FString m_ChildBodyName;
    
    UPROPERTY()
    int32 m_ParentId;
    
    UPROPERTY()
    int32 m_ChildId;
    
    UPROPERTY()
    uint32 m_GroupID;
    
    UPROPERTY()
    int32 m_ColId[8];
    
    UPROPERTY()
    bool m_IsKinematic;
    
    UPROPERTY()
    bool m_IsCollision;
    
    UPROPERTY()
    bool m_IsMultipleCollisionObject;
    
    UPROPERTY()
    float m_Mass;
    
    UPROPERTY()
    float m_Inertia;
    
    UPROPERTY()
    float m_Radius;
    
    UPROPERTY()
    float m_Damping;
    
    UPROPERTY()
    float m_Bounciness;
    
    UPROPERTY()
    float m_Friction;
    
    UPROPERTY()
    float m_WindDrag;
    
    UPROPERTY()
    float m_WindLift;
    
    UPROPERTY()
    float m_LocalTransCoeff;
    
    UPROPERTY()
    float m_MaxLocalTrans;
    
    UPROPERTY()
    TEnumAsByte<ESQEX_Bonamik_CollisionShape> m_ColShape;
    
    UPROPERTY()
    TEnumAsByte<ESQEX_Bonamik_ConstraintType> m_AddiConstType;
    
    UPROPERTY()
    float m_AddiConstStr;
    
    UPROPERTY()
    float m_AddiConstRad;
    
    UPROPERTY()
    FVector m_LocalTransform;
    
    UPROPERTY()
    FQuat m_LocalRotation;
    
    UPROPERTY()
    uint32 m_CollisionBatchNo;
    
    UPROPERTY()
    FVector m_LocalScale;
    
    UPROPERTY()
    float m_ConcaveRatio;
    
    UPROPERTY()
    float m_LFcoeff;
    
    UPROPERTY()
    float m_ParkRate;
    
    UPROPERTY()
    float m_MaxLF;
    
    UPROPERTY()
    float m_LFdrag;
    
    UPROPERTY()
    float m_LFlift;
    
    BONAMIKRT_API FSQEX_BonamikBodyDesc();
};

