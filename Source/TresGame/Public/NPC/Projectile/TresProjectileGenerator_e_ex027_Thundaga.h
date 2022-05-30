#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex027_ThundagaParam.h"
#include "TresProjectileGenerator_e_ex027_Thundaga.generated.h"

class UParticleSystem;

UCLASS()
class ATresProjectileGenerator_e_ex027_Thundaga : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemy_e_ex027_ThundagaParam> m_ThundagaParam;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThundagaEffData;
    
public:
    ATresProjectileGenerator_e_ex027_Thundaga();
};

