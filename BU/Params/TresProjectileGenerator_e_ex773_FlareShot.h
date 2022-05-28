#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex773_FlareShotSphereEntryParam.h"
#include "TresEnemy_e_ex773_FlareShotEntryParam.h"
#include "TresProjectileGenerator_e_ex773_FlareShot.generated.h"

class ATresProjectileBase;

UCLASS()
class ATresProjectileGenerator_e_ex773_FlareShot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_FlareShotArray;
    
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_FlareShotEntryParam> m_FlareShotEntryParamArray;
    
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_FlareShotSphereEntryParam> m_FlareShotSphereEntryParamArray;
    
    ATresProjectileGenerator_e_ex773_FlareShot();
};

