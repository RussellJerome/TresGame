#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresDarkRushCircleParam.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawn_e_ex326.generated.h"

class AStaticMeshActor;
class ATresProjectileBase;
class UParticleSystem;
class ATresWaterCurrentSplineActor;
class UPrimitiveComponent;
class USphereComponent;
class ATresCharPawnBase;
class UParticleSystemComponent;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex326 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkTornadoParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ArielComboFloorParticle;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* MySuctionWindComponent;
    
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
    float m_BulletShotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetShotTimerMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BulletShotVariation;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletTargetShotCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishBulletDegree;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishBulletRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FadeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresDarkRushCircleParam> m_sDarkRushCircleParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkTornadoStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> m_DarkRushCamHitActorData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkRushCamHitActorOffsetZ;
    
    UPROPERTY()
    ATresCharPawnBase* m_BuddyPawn;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_DarkTornadoParticle;
    
    UPROPERTY()
    TArray<float> m_TresDarkRushCircleTimerList;
    
    UPROPERTY()
    TArray<float> m_TresDarkRushCircleAngleList;
    
    UPROPERTY()
    TArray<float> m_TresDarkRushCircleRengeList;
    
    UPROPERTY()
    TArray<bool> m_TresDarkRushCircleIsReverseList;
    
    UPROPERTY()
    AStaticMeshActor* m_DurkRushCamHitActor;
    
public:
    ATresEnemyPawn_e_ex326();
    UFUNCTION()
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

