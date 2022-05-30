#pragma once
#include "CoreMinimal.h"
#include "TresAnimInstance.h"
#include "ETresUIActorAnimType.h"
#include "TresUIActorAnimInstance.generated.h"

UCLASS(NonTransient)
class UTresUIActorAnimInstance : public UTresAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimNameIdle;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimNameIdleFace;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimNameIdleBreak;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimNameIdleBreakFace;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_IdleRandomMin;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_IdleRandomMax;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableFaceAnim;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bLinkMode;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ETresUIActorAnimType m_AnimType;
    
public:
    UTresUIActorAnimInstance();
};

