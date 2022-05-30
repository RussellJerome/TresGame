#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresEnemyEx771_FlarePillarAttractParam.h"
#include "TresProjectile_e_ex771_FlarePillarOmen.generated.h"

class UParticleSystem;
class ATresProjectile_e_ex771_FlarePillar;
class UParticleSystemComponent;
class ATresActor_e_ex771_Attract;
class AActor;

UCLASS(Abstract)
class ATresProjectile_e_ex771_FlarePillarOmen : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx771_FlarePillarAttractParam> m_AttractParamArray;
    
    UPROPERTY()
    ATresProjectile_e_ex771_FlarePillar* m_FlarePillar;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_FlarePillarOmenEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_FlarePillarOmenEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OmenTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_Attract> m_pro_AttractClass;
    
    UPROPERTY()
    AActor* m_pTarget;
    
    ATresProjectile_e_ex771_FlarePillarOmen();
};

