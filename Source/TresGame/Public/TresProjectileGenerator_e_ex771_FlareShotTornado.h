#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex771_FlareShotTornadoEntryParam.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex771_FlareShotTornadoParam.h"
#include "TresProjectileGenerator_e_ex771_FlareShotTornado.generated.h"

class UParticleSystem;

UCLASS()
class ATresProjectileGenerator_e_ex771_FlareShotTornado : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemy_e_ex771_FlareShotTornadoParam> m_FlareShotTornadoParamArray;
    
    UPROPERTY()
    TArray<FTresEnemy_e_ex771_FlareShotTornadoEntryParam> m_FlareShotTornadoEntryParamArray;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_FireOmenEffData;
    
public:
    ATresProjectileGenerator_e_ex771_FlareShotTornado();
};

