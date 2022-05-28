#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex003Effect.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex003Effect {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_EffAttachName;
    
    TRESGAME_API FTresEnemy_e_ex003Effect();
};

