#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "TresEnemyPawn_e_ex362.generated.h"

class USoundBase;
class ATresEnemyPawn_e_ex363;
class ATresCameraNormal;

UCLASS()
class ATresEnemyPawn_e_ex362 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UClass* m_EnemyPawn_BuddyData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeAirIdlePlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeIdlePlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeWaitTime;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex363* m_BuddyPawn;
    
    UPROPERTY(Transient)
    ATresCameraNormal* m_Camera;
    
public:
    ATresEnemyPawn_e_ex362();
    UFUNCTION(BlueprintCallable)
    bool IsShowCharacter();
    
    UFUNCTION(BlueprintCallable)
    bool CanChangePattern();
    
};

