#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex773_FlareShotTornadoParam.h"
#include "TresEnemy_e_ex773_FlareShotTornadoEntryParam.h"
#include "TresProjectileGenerator_e_ex773_FlareShotTornado.generated.h"

class UParticleSystem;

UCLASS()
class ATresProjectileGenerator_e_ex773_FlareShotTornado : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_FlareShotTornadoParam> m_FlareShotTornadoParamArray;
    
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_FlareShotTornadoEntryParam> m_FlareShotTornadoEntryParamArray;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_FireOmenEffData;
    
public:
    ATresProjectileGenerator_e_ex773_FlareShotTornado();
};

