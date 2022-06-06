#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIEPawnBase.h"
#include "TresEnemyPawn_e_ex301a.generated.h"

class USoundBase;

UCLASS()
class ATresEnemyPawn_e_ex301a : public ATresEnemyXIIIEPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_AnnihilationStartSoundData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_AnnihilationEndSoundData;
    
public:
    ATresEnemyPawn_e_ex301a();
    UFUNCTION(Exec)
    bool IsRunningAllOtherEnemiesBT() const;
    
    UFUNCTION()
    bool IsEndAllAnnihilationAttack();
    
    UFUNCTION()
    bool IsAllXIIIEDuringWarp();
    
    UFUNCTION()
    void DebugSetDisableFirstAnnihilation(int32 bDisable);
    
    UFUNCTION()
    void DebugSetDebugAllBlackBoardAnnihilation();
    
    UFUNCTION()
    void DebugSendRemoteEventForFirstAnnihilation();
    
    UFUNCTION(BlueprintCallable)
    void BP_StartMasterLightAnnihilation();
    
    UFUNCTION(BlueprintCallable)
    void BP_SpawnTornado();
    
    UFUNCTION(BlueprintCallable)
    void BP_EndFirstAnnihilationEvent();
    
};

