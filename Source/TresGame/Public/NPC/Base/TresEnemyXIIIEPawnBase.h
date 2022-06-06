#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresEnemyXIIIEPlayVoiceKind.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyXIIIEPawnBase.generated.h"

class ATresEnemyManager_XIIIE;
class USoundBase;

UCLASS()
class ATresEnemyXIIIEPawnBase : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    uint8 m_bDebugActiveSecondAnnihilation: 1;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAreaEPawn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyXIIIEPlayVoiceKind m_RevengePlayVoiceKind;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_RevengeVoice;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VisibleTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyManager_XIIIE> m_ManagerAsset;
    
public:
    ATresEnemyXIIIEPawnBase();
    UFUNCTION()
    bool IsStartFirstAnnihilation();
    
    UFUNCTION()
    bool IsMyAnnihilationAttackTurn();
    
    UFUNCTION()
    bool IsLeaderPawn();
    
    UFUNCTION()
    bool IsEndAnnihilation();
    
    UFUNCTION()
    bool IsDuringWarp();
    
    UFUNCTION(Exec)
    bool IsDuringLeaderChangeOrFatalAttackCooldown();
    
    UFUNCTION(Exec)
    bool IsDuringLeaderChangeCooldown();
    
    UFUNCTION(Exec)
    bool IsDuringFatalAttackCooldown();
    
    UFUNCTION()
    bool IsDebugActiveSecondAnnihilation();
    
    UFUNCTION()
    bool IsActivatedFirstAnnihilation();
    
    UFUNCTION(Exec)
    void DebugSetLeader(int32 SetLeaderNum);
    
    UFUNCTION(Exec)
    bool CanUseLeaderChange();
    
    UFUNCTION(Exec)
    bool CanUseFatalAttack();
    
    UFUNCTION(Exec)
    bool CanUseAnnihilation();
    
    UFUNCTION(Exec)
    bool CanStartLeaderChangeOrFatalAttack();
    
};

