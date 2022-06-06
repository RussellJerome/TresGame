#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBase.h"
#include "ETresCmnCureEffectGrpID.h"
#include "TresProj_MagicCure.generated.h"

class AActor;

UCLASS(Abstract)
class ATresProj_MagicCure : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_DetectRange;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AppendCure;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BonusAppendCure;
    
    UPROPERTY(EditDefaultsOnly)
    ETresCmnCureEffectGrpID m_CureEffectType;
    
    UPROPERTY(DuplicateTransient, Transient)
    AActor* m_pTargetActor;
    
public:
    ATresProj_MagicCure();
};

