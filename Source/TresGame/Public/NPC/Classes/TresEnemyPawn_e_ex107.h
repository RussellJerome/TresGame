#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresEnemySetAppearMode.h"
#include "ETresStateID.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex107.generated.h"

class UParticleSystem;
class ATresCharPawnBase;

UCLASS()
class ATresEnemyPawn_e_ex107 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCharPawnBase> m_DropPawn;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WeaponAppearParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WeaponVisibleInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallAnimBlendTime;
    
public:
    UPROPERTY(EditInstanceOnly)
    float m_Scale;
    
    UPROPERTY(EditInstanceOnly)
    float m_ParameterScale;
    
    ATresEnemyPawn_e_ex107();
    UFUNCTION()
    void OnDtorStateEvent(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugAppear(TEnumAsByte<ETresEnemySetAppearMode> AppearMode, float AppearTime);
    
};

