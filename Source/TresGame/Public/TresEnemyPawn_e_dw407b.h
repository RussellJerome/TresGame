#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyDarkSidePawnBase.h"
#include "TresEnemyPawn_e_dw407b.generated.h"

class ATresPatternActor_e_dw407b_Manager;
class ATresProjectileBase;

UCLASS()
class ATresEnemyPawn_e_dw407b : public ATresEnemyDarkSidePawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProdusedRoarProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_PillarLightProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SameAttackCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndLaserCountTimingTime;
    
public:
    UPROPERTY()
    ATresPatternActor_e_dw407b_Manager* m_PatternData;
    
    ATresEnemyPawn_e_dw407b();
    UFUNCTION(BlueprintCallable)
    void NotifyBattleStart();
    
    UFUNCTION(BlueprintPure)
    bool GetIsBattleStart() const;
    
};

