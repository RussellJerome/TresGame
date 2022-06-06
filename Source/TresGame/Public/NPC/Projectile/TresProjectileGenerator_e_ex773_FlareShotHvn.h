#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex773_FlareShotHvnGroupParam.h"
#include "TresProjectileGenerator_e_ex773_FlareShotHvn.generated.h"

class UParticleSystem;

UCLASS()
class ATresProjectileGenerator_e_ex773_FlareShotHvn : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_FlareShotHvnGroupParam> m_FlareShotHvnGroupParamArray;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_FireOmenEffData;
    
public:
    ATresProjectileGenerator_e_ex773_FlareShotHvn();
};

