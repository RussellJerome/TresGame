#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresTornadoDebrisActorBase.generated.h"

class ATresPlayerPawnBase;
class UTresLockonTargetComponent;
class USceneComponent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresTornadoDebrisActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* m_pRotateSceneComp;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* m_pDebrisMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 m_iPushLevel;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_vLocalTranslation;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DestinationEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UTresLockonTargetComponent* m_LockonComp;
    
protected:
    UPROPERTY()
    ATresPlayerPawnBase* m_Player;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bNowEvade;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_DestinationEffectComp;
    
public:
    ATresTornadoDebrisActorBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TraceCheck(FVector Start, FVector End, float Radius, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    void SetDebrisRotation(FRotator inRot);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLocalEvadeLocation(float inMaxEvadeDistance, float inEvadeRadius, float inMinVelocity, float inMaxVelocity, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetEvadeRadius();
    
};

