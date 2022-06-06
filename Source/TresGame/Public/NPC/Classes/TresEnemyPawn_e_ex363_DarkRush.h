#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPawnBase.h"
#include "TresE_EX363DarkRushCircleParam.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawn_e_ex363_DarkRush.generated.h"

class ATresWaterCurrentSplineActor;
class UPrimitiveComponent;
class USphereComponent;
class ATresProjectileBase;
class UParticleSystem;
class UParticleSystemComponent;
class AStaticMeshActor;
class ATresEnemyPawn_e_ex363;
class ATresCharPawnBase;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex363_DarkRush : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LoopBulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkTornadoParticleData;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* MySuctionWindComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkTornadoOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_WaterSplineClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotWindRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WindForce;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StrongWindDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StrongWindForce;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_EX363DarkRushCircleParam> m_sDarkRushCircleParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkTornadoStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> m_DarkRushCamHitActorData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkRushCamHitActorOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotHitTime;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_DarkTornadoParticle;
    
    UPROPERTY()
    ATresProjectileBase* m_DarkCircleBullet;
    
    UPROPERTY()
    TArray<float> m_TresDarkRushCircleTimerList;
    
    UPROPERTY()
    TArray<float> m_TresDarkRushCircleAngleList;
    
    UPROPERTY()
    TArray<float> m_TresDarkRushCircleRengeList;
    
    UPROPERTY()
    TArray<bool> m_TresDarkRushCircleIsReverseList;
    
    UPROPERTY()
    TArray<ATresProjectileBase*> m_LoopDarkRushCircleBulletList;
    
    UPROPERTY()
    AStaticMeshActor* m_DurkRushCamHitActor;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex363* m_MyParent;
    
    UPROPERTY()
    ATresCharPawnBase* m_MyTarget;
    
public:
    ATresEnemyPawn_e_ex363_DarkRush();
protected:
    UFUNCTION()
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

