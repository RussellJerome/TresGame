#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Damage.h"
#include "TresAICharState_Damage.generated.h"

class UParticleSystemComponent;
class USceneComponent;

UCLASS()
class UTresAICharState_Damage : public UTresCharState_Damage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_MerryGoroundEffect;
    
    UPROPERTY(Export)
    USceneComponent* m_pPoleComponent;
    
public:
    UTresAICharState_Damage();
};

