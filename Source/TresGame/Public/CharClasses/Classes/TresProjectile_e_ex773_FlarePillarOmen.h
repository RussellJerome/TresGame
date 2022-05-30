#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresEnemyEx773_FlarePillarAttractParam.h"
#include "TresProjectile_e_ex773_FlarePillarOmen.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class ATresProjectile_e_ex773_FlarePillar;
class AActor;
class ATresActor_e_ex773_Attract;

UCLASS(Abstract)
class ATresProjectile_e_ex773_FlarePillarOmen : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx773_FlarePillarAttractParam> m_AttractParamArray;
    
    UPROPERTY()
    ATresProjectile_e_ex773_FlarePillar* m_FlarePillar;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_FlarePillarOmenEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_FlarePillarOmenEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OmenTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_Attract> m_pro_AttractClass;
    
    UPROPERTY()
    AActor* m_pTarget;
    
    ATresProjectile_e_ex773_FlarePillarOmen();
};

