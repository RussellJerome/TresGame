#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ColorTypes_e_ex781Gigas.h"
#include "TresEnemyPawn_e_ex781_Gigas.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresEnemyPawn_e_ex781_Gigas : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ColorTypes_e_ex781Gigas> m_ColorType;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_UniqueEffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DestroyDist;
    
    ATresEnemyPawn_e_ex781_Gigas();
};

