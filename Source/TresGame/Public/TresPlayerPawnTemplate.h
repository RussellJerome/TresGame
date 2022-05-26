#pragma once
#include "CoreMinimal.h"
#include "TresPlayerPawnBase.h"
#include "VoiceAndLipParameter.h"
#include "ETresStateID.h"
#include "TresPlayerPawnTemplate.generated.h"

class UTresPlayerAttackStateDataSet;

UCLASS(Abstract)
class ATresPlayerPawnTemplate : public ATresPlayerPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UTresPlayerAttackStateDataSet* m_pAttackStateDataSet;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVoiceAndLipParameter> m_VoiceAndLipParams;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_StrongAddMotionNameForFront;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_StrongAddMotionNameForBack;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_StrongAddMotionSlotName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAddReactionCoolDownTime;
    
public:
    ATresPlayerPawnTemplate();
private:
    UFUNCTION()
    void _OnDtorStateForBind(TEnumAsByte<ETresStateID> eStateID);
    
    UFUNCTION()
    void _OnCtorStateForBind(TEnumAsByte<ETresStateID> eStateID);
    
};

