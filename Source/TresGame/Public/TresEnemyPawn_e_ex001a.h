#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawn_e_ex001.h"
#include "TresSpawnEnemyParam_e_ex001a.h"
#include "TresEnemyPawn_e_ex001a.generated.h"

class UParticleSystemComponent;
class UEnvQuery;
class UParticleSystem;

UCLASS()
class ATresEnemyPawn_e_ex001a : public ATresEnemyPawn_e_ex001 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FTresSpawnEnemyParam_e_ex001a> m_SpawnParam;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_SpawnPointEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpInEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpOutEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_KairiPieceEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_KairiPieceEffect_ShadowMove;
    
private:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_KairiPieceEffectComp;
    
public:
    ATresEnemyPawn_e_ex001a();
};

