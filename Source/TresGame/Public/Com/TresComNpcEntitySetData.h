#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresComNpcEntitySetData.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcEntitySetData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FVector m_Location;
    
    UPROPERTY(VisibleAnywhere)
    FRotator m_Rotation;
    
    UPROPERTY(VisibleAnywhere)
    FName m_RecordName;
    
    UPROPERTY(VisibleAnywhere)
    FName m_IdleAnimName;
    
    UPROPERTY(VisibleAnywhere)
    FName m_ActionSeqName;
    
    UPROPERTY(VisibleAnywhere)
    FName m_MasterPoseSeqName;
    
    UPROPERTY(VisibleAnywhere)
    int16 m_PoseGroupType;
    
    UPROPERTY(VisibleAnywhere)
    int16 m_ReactionType;
    
    UPROPERTY(VisibleAnywhere)
    int16 m_BodyColType;
    
    UPROPERTY(VisibleAnywhere)
    int16 m_ScaleType;
    
    UPROPERTY(VisibleAnywhere)
    FName m_AnimActorType;
    
    UPROPERTY(VisibleAnywhere)
    FName m_MeshActorType;
    
    UPROPERTY(VisibleAnywhere)
    FName m_EntityName;
    
    UPROPERTY(VisibleAnywhere)
    FName m_FaceAnimName;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableLookAt: 1;
    
    TRESGAME_API FTresComNpcEntitySetData();
};

