#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex781_TetraBit.generated.h"

class USQEX_ParticleAttachDataAsset;
class ATresCharPawnBase;

UCLASS()
class ATresEnemyPawn_e_ex781_TetraBit : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_UniqueEffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DestroyWaitTime;
    
private:
    UPROPERTY()
    ATresCharPawnBase* m_MyTarget;
    
public:
    ATresEnemyPawn_e_ex781_TetraBit();
};

