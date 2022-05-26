#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex771_HvnDebrisParam.h"
#include "TresProjectileGenerator_e_ex771_HvnDebris.generated.h"

class UParticleSystem;
class ATresProjectile_e_ex771_DebrisAttract;

UCLASS()
class ATresProjectileGenerator_e_ex771_HvnDebris : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemy_e_ex771_HvnDebrisParam> m_HvnDebrisParamArray;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_DebrisEffData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex771_DebrisAttract> m_pro_DebrisAttractClass;
    
public:
    ATresProjectileGenerator_e_ex771_HvnDebris();
};

