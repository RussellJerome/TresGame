#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimationAsset.h"
#include "Animation/AnimationAsset.h"
#include "Animation/AnimationAsset.h"
#include "TresAnimNode_AnimSetPlayer.generated.h"

class UTresAnimInstance;
class UAnimSequenceBase;
class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_AnimSetPlayer : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_AnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PlayRate;
    
    UPROPERTY()
    int32 m_GroupIndex;
    
    UPROPERTY()
    TEnumAsByte<EAnimGroupRole::Type> m_GroupRole;
    
    UPROPERTY(Transient)
    UAnimSequenceBase* m_Sequence;
    
    UPROPERTY(Transient)
    UBlendSpaceBase* m_BlendSpace;
    
    UPROPERTY(Transient)
    UTresAnimInstance* m_Instance;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    float m_InternalTimeAccumulator;
    
    UPROPERTY()
    FBlendFilter m_BlendFilter;
    
    UPROPERTY()
    TArray<FBlendSampleData> m_BlendSampleDataCache;
    
public:
    FTresAnimNode_AnimSetPlayer();
};

