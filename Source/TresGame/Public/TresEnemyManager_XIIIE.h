#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "ETresEnemyXIIIEFirstAnnihilationRule.h"
#include "ETresEnemyXIIIELeaderChangeRule.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyManager_XIIIE.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class ATresProjectile_XIIIE_BladeTornado;
class ATresProjectile_XIIIE_BladeTornadoForTackle;

UCLASS()
class ATresEnemyManager_XIIIE : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ETresEnemyXIIIELeaderChangeRule m_ExtractRule;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PostAuraEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_PostAuraEff;
    
    UPROPERTY(EditAnywhere)
    ETresEnemyXIIIEFirstAnnihilationRule m_FirstAnnihilationRule;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_XIIIE_BladeTornado> m_BladeTornadoClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_XIIIE_BladeTornadoForTackle> m_BladeTornadoForTackleClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_BladeTornadoSpawnOffsetLocation[2];
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TornadoEffData;
    
    UPROPERTY(EditAnywhere)
    FVector m_TornadoEffPos;
    
    UPROPERTY(EditAnywhere)
    int32 m_FirstAnnihilationHitPointPer;
    
    UPROPERTY(EditAnywhere)
    float m_FirstAnnihilationStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FirstAnnihilationAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FirstAnnihilationLightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FirstAnnihilationLightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnnihilationLightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnnihilationLightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnnihilationLightChangeEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnnihilationBladeTornadoAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnnihilationAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnnihilationTornadoSpawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnnihilationReverbeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeEndTime;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresProjectile_XIIIE_BladeTornado>> m_BladeTornado;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_TornadoEff;
    
public:
    ATresEnemyManager_XIIIE();
};

