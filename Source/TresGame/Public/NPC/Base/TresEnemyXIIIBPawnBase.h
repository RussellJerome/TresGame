#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyXIIIBPawnBase.generated.h"

class UEnvQuery;
class UParticleSystem;

UCLASS(Abstract)
class ATresEnemyXIIIBPawnBase : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_VanishModeEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_VanishModeEndQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SmokeCardParticleSystem;
    
public:
    ATresEnemyXIIIBPawnBase();
    UFUNCTION(Exec)
    bool IsStun_e_ex307() const;
    
    UFUNCTION(Exec)
    bool IsDuringCoopActionCooldown_Phase3();
    
    UFUNCTION(Exec)
    bool IsDuringCoopActionCooldown_Phase2();
    
    UFUNCTION(Exec)
    bool IsCardEscape() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSetEnableAlwaysCardScapegoat(int32 bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDefaultBT();
    
};

