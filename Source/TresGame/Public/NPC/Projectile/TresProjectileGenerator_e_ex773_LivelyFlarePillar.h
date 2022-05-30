#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex773_LivelyFlarePillarPoint.h"
#include "TresEnemy_e_ex773_LivelyFlarePillarParam.h"
#include "TresEnemy_e_ex773_LivelyFlarePillarGenClass.h"
#include "TresProjectileGenerator_e_ex773_LivelyFlarePillar.generated.h"

UCLASS()
class ATresProjectileGenerator_e_ex773_LivelyFlarePillar : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_LivelyFlarePillarParam> m_LivelyFlarePillarParamArray;
    
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_LivelyFlarePillarPoint> m_LivelyFlarePillarPointArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_ex773_LivelyFlarePillarGenClass> GenDataArray;
    
    ATresProjectileGenerator_e_ex773_LivelyFlarePillar();
};

