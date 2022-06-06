#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyPawn_e_ex325.generated.h"

class USoundBase;
class ATresEnemyPawn_e_ex326;
class ATresCharPawnBase;

UCLASS()
class ATresEnemyPawn_e_ex325 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UClass* m_EnemyPawn_BuddyData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeAirIdlePlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeIdlePlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsInitBuddy;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PhaseEXOneEndHitPoint;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex326* m_BuddyPawn;
    
    UPROPERTY()
    ATresCharPawnBase* m_AttackedChar;
    
public:
    ATresEnemyPawn_e_ex325();
    UFUNCTION(BlueprintCallable)
    bool IsFinishAttack();
    
};

