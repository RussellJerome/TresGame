#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIBCoopPawnBase.h"
#include "TresEnemyPawn_e_ex309.generated.h"

class UTresProjectileManagerComponent_e_ex309_Jinrai;
class USoundBase;

UCLASS()
class ATresEnemyPawn_e_ex309 : public ATresEnemyXIIIBCoopPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresProjectileManagerComponent_e_ex309_Jinrai* MyProjectileManager;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpFadeInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RevengeVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bEnableRevengeVoice2D;
    
public:
    ATresEnemyPawn_e_ex309();
    UFUNCTION(Exec)
    bool IsJinraiBeforeAttackHit() const;
    
    UFUNCTION(Exec)
    bool IsDuringTenraiCooldown_Phase2();
    
    UFUNCTION(Exec)
    bool IsDuringRaijishiCooldown();
    
};

