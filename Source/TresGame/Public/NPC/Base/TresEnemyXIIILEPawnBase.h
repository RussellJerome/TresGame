#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "ETresEnemyXIIILEPlayVoiceKind.h"
#include "ETresStateID.h"
#include "TresEnemyXIIILEPawnBase.generated.h"

class USoundBase;

UCLASS()
class ATresEnemyXIIILEPawnBase : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyXIIILEPlayVoiceKind m_RevengePlayVoiceKind;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RevengetVoiceList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VisibleTime;
    
public:
    ATresEnemyXIIILEPawnBase();
    UFUNCTION()
    void OnDtorStateCallBackXIIIE(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateCallBackXIIIE(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    bool IsDuringWarp();
    
};

