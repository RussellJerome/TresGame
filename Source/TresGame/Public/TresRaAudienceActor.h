#pragma once
#include "CoreMinimal.h"
#include "TresComNpcScaleData.h"
#include "TresCharPawnBase.h"
#include "TresRaAudienceActor.generated.h"

UCLASS()
class ATresRaAudienceActor : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_RecordName;
    
    UPROPERTY(EditAnywhere)
    FName m_IdleAnimName;
    
    UPROPERTY(EditAnywhere)
    FName m_ActionSeqName;
    
    UPROPERTY(EditAnywhere)
    int32 m_BodyColType;
    
    UPROPERTY(EditAnywhere)
    int32 m_PoseGroupType;
    
    UPROPERTY(EditAnywhere)
    FName m_PoseGroupName;
    
    UPROPERTY(EditAnywhere)
    int32 m_ReactionType;
    
    UPROPERTY(EditAnywhere)
    FName m_ReplaceMesh;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableBodyCollision: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FTresComNpcScaleData m_ScaleData;
    
    ATresRaAudienceActor();
};

