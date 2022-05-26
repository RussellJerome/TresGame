#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex773_FlareTornadoParam.h"
#include "TresEnemy_e_ex773_ExFlareTornadoParam.h"
#include "TresProjectileGenerator_e_ex773_FlareTornado.generated.h"

UCLASS()
class ATresProjectileGenerator_e_ex773_FlareTornado : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_FlareTornadoParam> m_FlareTornadoParamArray;
    
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_ExFlareTornadoParam> m_ExFlareTornadoParamArray;
    
    ATresProjectileGenerator_e_ex773_FlareTornado();
};

