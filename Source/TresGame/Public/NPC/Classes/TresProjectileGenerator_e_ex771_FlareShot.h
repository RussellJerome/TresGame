#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex771_FlareShotEntryParam.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex771_FlareShotSphereEntryParam.h"
#include "TresProjectileGenerator_e_ex771_FlareShot.generated.h"

class ATresProjectileBase;

UCLASS()
class ATresProjectileGenerator_e_ex771_FlareShot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_FlareShotArray;
    
    UPROPERTY()
    TArray<FTresEnemy_e_ex771_FlareShotEntryParam> m_FlareShotEntryParamArray;
    
    UPROPERTY()
    TArray<FTresEnemy_e_ex771_FlareShotSphereEntryParam> m_FlareShotSphereEntryParamArray;
    
    ATresProjectileGenerator_e_ex771_FlareShot();
};

