#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipActorCompoBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipEffectSetComponent.generated.h"

class UParticleSystemComponent;
class UParticleSystem;
class USceneComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipEffectSetComponent : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> m_ParticleSystems;
    
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_ParticleSystemComponents;
    
public:
    UTresGumiShipEffectSetComponent();
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnEffectAttachedSetAbsolute(const int32 dParticleSystemIndex, USceneComponent* pAttachToComponent, bool bIsManagedTarget, int32 dGroupID, bool bAbsoluteLocation, bool bAbsoluteRotation, bool bAbsoluteScale, FName AttachPointName, FVector vLocation, FRotator Rotation, FVector vScale, TEnumAsByte<EAttachLocation::Type> eLocationType, float fWarmupTime);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnEffectAttached(const int32 dParticleSystemIndex, USceneComponent* pAttachToComponent, bool bIsManagedTarget, int32 dGroupID, FName AttachPointName, FVector vLocation, FRotator Rotation, FVector vScale, TEnumAsByte<EAttachLocation::Type> eLocationType, float fWarmupTime);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnEffectAtLocation(const int32 dParticleSystemIndex, AActor* pOuter, bool bIsManagedTarget, int32 dGroupID, FVector vLocation, FRotator Rotation, FVector vScale, float fWarmupTime);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInvalidComponentFromGroupID(int32 dGroupID);
    
    UFUNCTION(BlueprintCallable)
    void LoopEndEffectFromGroupID(int32 dGroupID, bool bImmediatelyRemove);
    
    UFUNCTION(BlueprintCallable)
    void LoopEndEffect(bool bImmediatelyRemove);
    
    UFUNCTION(BlueprintPure)
    bool IsEndFromGroup(int32 dGroupID) const;
    
};

