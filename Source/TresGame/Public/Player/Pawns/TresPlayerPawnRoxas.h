#pragma once
#include "CoreMinimal.h"
#include "TresPlayerPawnTemplate.h"
#include "Engine/EngineTypes.h"
#include "TresPlayerPawnRoxas.generated.h"

class AController;
class AActor;
class UParticleSystem;

UCLASS()
class ATresPlayerPawnRoxas : public ATresPlayerPawnTemplate {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FTresOnDamage, float, InDamageAmount, const FDamageEvent&, InDamageEvent, AController*, InEventInstigator, AActor*, InDamageCauser);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ParticleSystem;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTresOnDamage OnDamageEvent;
    
    ATresPlayerPawnRoxas();
};

