#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "ETresDamageKind.h"
#include "TresEx048BladeEffectMan.h"
#include "TresEnemyPawn_e_ex048.generated.h"

class UParticleSystem;
class UTresAnimSet;
class ATresProjectileBase;

UCLASS()
class ATresEnemyPawn_e_ex048 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTresAnimSet* m_LandModeAnimSet;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BladeEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<ETresDamageKind>> m_ChangeFlyModeReaction;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_MissileProjectileAsset;
    
private:
    UPROPERTY()
    FTresEx048BladeEffectMan m_BladeEffectManager;
    
public:
    ATresEnemyPawn_e_ex048();
    UFUNCTION(BlueprintPure)
    bool IsFlyMode() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT();
    
};

