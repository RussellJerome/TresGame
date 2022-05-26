#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex773_EncloseFlareParam.h"
#include "GameFramework/Actor.h"
#include "TresProjectileGenerator_e_ex773_EncloseFlare.generated.h"

UCLASS()
class ATresProjectileGenerator_e_ex773_EncloseFlare : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemy_e_ex773_EncloseFlareParam> m_EncloseFlareParamArray;
    
    ATresProjectileGenerator_e_ex773_EncloseFlare();
};

