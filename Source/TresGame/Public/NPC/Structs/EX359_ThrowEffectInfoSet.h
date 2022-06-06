#pragma once
#include "CoreMinimal.h"
#include "EX359_ThrowEffectInfo.h"
#include "EX359_ThrowEffectInfoSet.generated.h"

class UParticleSystem;
class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX359_ThrowEffectInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_ThrowEffectInfo> m_ThrowEffectInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ParticleClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAttach;
    
protected:
    UPROPERTY()
    ATresProjectileBase* m_OwnerProj;
    
public:
    TRESGAME_API FEX359_ThrowEffectInfoSet();
};

