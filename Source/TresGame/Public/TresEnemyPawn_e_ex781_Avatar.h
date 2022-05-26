#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "TresEnemyPawn_e_ex781_Avatar.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex781_Avatar : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeInSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeOutSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeMaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VisibleAfterImageTime;
    
    ATresEnemyPawn_e_ex781_Avatar();
};

