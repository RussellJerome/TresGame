#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex773_ReverseFlareOmen.generated.h"

class ATresActor_e_ex773_Attract;

UCLASS(Abstract)
class ATresProjectile_e_ex773_ReverseFlareOmen : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_Attract> m_pro_AttractClass;
    
    UPROPERTY(EditDefaultsOnly)
    float BombTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AttractTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AttractRange;
    
    UPROPERTY(EditDefaultsOnly)
    float AttractForce;
    
public:
    ATresProjectile_e_ex773_ReverseFlareOmen();
};

