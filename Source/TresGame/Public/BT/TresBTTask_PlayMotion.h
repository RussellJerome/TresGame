#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_PlayMotion.generated.h"

class UAnimSequenceBase;

UCLASS()
class UTresBTTask_PlayMotion : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditAnywhere)
    float m_BlendInTime;
    
    UPROPERTY(EditAnywhere)
    int32 m_EffectGroup;
    
    UPROPERTY(EditAnywhere)
    float m_PlayRate;
    
    UTresBTTask_PlayMotion();
};

