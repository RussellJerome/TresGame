#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawn_e_ex301_PurgatoryDamageBox.generated.h"

class UPrimitiveComponent;
class UParticleSystem;
class AActor;
class UBoxComponent;

UCLASS()
class ATresEnemyPawn_e_ex301_PurgatoryDamageBox : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_DamageStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_DamageIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float m_Damage;
    
    UPROPERTY(EditAnywhere)
    float m_IsDestroyDamageBoxTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GrandParticleData;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* MyDamageComponent;
    
public:
    ATresEnemyPawn_e_ex301_PurgatoryDamageBox();
private:
    UFUNCTION()
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

