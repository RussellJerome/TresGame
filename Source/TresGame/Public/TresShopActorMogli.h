#pragma once
#include "CoreMinimal.h"
#include "TresShopActor.h"
#include "TresShopActorMogli.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresShopActorMogli : public ATresShopActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_BaseEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pBaseEffect;
    
public:
    ATresShopActorMogli();
};

