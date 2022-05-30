#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresSpawnHandParam_e_ex702.h"
#include "TresEnemyPawn_e_ex702.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresEnemyPawn_e_ex702 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_GroundEffectAttachDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FTresSpawnHandParam_e_ex702 m_ModeChangeHandSpawnParam;
    
public:
    ATresEnemyPawn_e_ex702();
    UFUNCTION()
    int32 GetNumTarHand() const;
    
};

