#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ETresStateID.h"
#include "TresEnemyPawn_e_ex352.generated.h"

class USoundBase;
class UPrimitiveComponent;
class USphereComponent;
class UParticleSystem;
class ATresProjectile_e_ex352_DarkMatter;
class UParticleSystemComponent;
class ATresProjectileBase;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex352 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* MyPullCollisionComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_DarkMatterOffset[2];
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_DarkMatterOffsetForChange[2];
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EnvironmentalChangeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VisibleTime;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_RevengeVoice;
    
    UPROPERTY(Transient)
    ATresProjectile_e_ex352_DarkMatter* m_DarkMatter[2];
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_EnvironmentalChangeEffectCmp;
    
public:
    ATresEnemyPawn_e_ex352();
    UFUNCTION(BlueprintCallable)
    ATresProjectileBase* SpawnDarkMatter(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDarkMatter();
    
    UFUNCTION()
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnDtorStateEvent_e_ex352(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateEvent_e_ex352(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION(BlueprintPure)
    bool IsExistDarkMatter() const;
    
    UFUNCTION(BlueprintCallable)
    void HideAnsem(bool bHide);
    
    UFUNCTION(BlueprintPure)
    int32 GetReleaseDarkMineNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDarkMatterNum() const;
    
};

