#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex061.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex061 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearFadeTime;
    
    ATresEnemyPawn_e_ex061();
    UFUNCTION(BlueprintPure)
    bool IsTsuboWaiting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisableAttractionFlowMarkerDisp_061() const;
    
};

