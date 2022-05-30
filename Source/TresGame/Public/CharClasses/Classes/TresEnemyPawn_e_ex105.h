#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex105.generated.h"

class UParticleSystem;
class ATresProjectileBase;
class USoundBase;

UCLASS()
class ATresEnemyPawn_e_ex105 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_pCubeJoint;
    
    UPROPERTY()
    ATresProjectileBase* m_pChaosShotCubeJoint;
    
    UPROPERTY()
    ATresProjectileBase* m_pRanbuCubeJoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DamageCubeScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DamageCubeScaleTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_NoHitEffData;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bNoHit;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_SoundData;
    
    ATresEnemyPawn_e_ex105();
};

