#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIIBPawnBase.h"
#include "TresEnemyPawn_e_ex307.generated.h"

class UParticleSystem;
class UTresStateBase;
class UTresEnemyCardManager_e_ex307;
class USoundBase;

UCLASS()
class ATresEnemyPawn_e_ex307 : public ATresEnemyXIIIBPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_StunActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresEnemyCardManager_e_ex307> m_CardManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_CorrectCardVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableCorrectCardVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_IncorrectCardVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableIncorrectCardVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IncorrectCardVoicePlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StunLimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StunLimitHitPointRate;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SmokeParticleSystem;
    
    UPROPERTY()
    UTresEnemyCardManager_e_ex307* m_CardManager;
    
public:
    ATresEnemyPawn_e_ex307();
    UFUNCTION(BlueprintCallable)
    void SpawnCards();
    
    UFUNCTION(Exec)
    bool IsCardVanishMode() const;
    
    UFUNCTION(Exec)
    void DebugSetEnableDrawCardType(int32 bEnable);
    
};

