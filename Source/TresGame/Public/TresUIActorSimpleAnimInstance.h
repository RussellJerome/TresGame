#pragma once
#include "CoreMinimal.h"
#include "TresAnimInstance.h"
#include "TresUIActorSimpleAnimInstance.generated.h"

UCLASS(NonTransient)
class UTresUIActorSimpleAnimInstance : public UTresAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimNameIdle;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimNameIdleFace;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimNameBlinkFace;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableFaceAnim;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_IdleFaceCount;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCustomLipAnim;
    
public:
    UTresUIActorSimpleAnimInstance();
};

