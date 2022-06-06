#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ca010_CoopInfo.h"
#include "ETresLevelEntityAppearMode.h"
#include "TresEnemyPawn_e_ex010.generated.h"

class ATresEnemyPawn_e_ex007;

UCLASS()
class ATresEnemyPawn_e_ex010 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyPawn_e_ca010_CoopInfo m_CoopInfo;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bRailSlidePawn: 1;
    
public:
    UPROPERTY()
    ATresEnemyPawn_e_ex007* m_PartnerPawn;
    
    ATresEnemyPawn_e_ex010();
    UFUNCTION(BlueprintCallable)
    void SetAppearModeAndState(TEnumAsByte<ETresLevelEntityAppearMode> AppearMode);
    
    UFUNCTION(BlueprintPure)
    bool IsCoopMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckUpDownCollision(float inRelativeHeight);
    
};

