#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TresOverlapInfo.h"
#include "Engine/EngineTypes.h"
#include "TresBodyCollComponent.generated.h"

class UTresBodyCollPrimitive;
class UPrimitiveComponent;
class AActor;
class UTresRootComponent;
class UPhysicsAsset;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresBodyCollComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<UTresBodyCollPrimitive*> m_BodyColls;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<UPrimitiveComponent*> m_IBodyPrims;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<UTresRootComponent*> m_BaseColls;
    
    UPROPERTY(Transient)
    TArray<AActor*> m_IgnoreActors;
    
    UPROPERTY()
    uint8 m_bEnableTeamCheck: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bCreatePhysAssetCollision: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bCanbeRidePhysAssetCollision: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    UPhysicsAsset* m_BaseAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    FName m_RigidPhysCollisionPreset;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<FTresOverlapInfo> m_OverlapList;
    
public:
    UTresBodyCollComponent();
protected:
    UFUNCTION()
    void OnBodyEndOverlap(UTresBodyCollPrimitive* MyPrim, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBodyBeginOverlap(UTresBodyCollPrimitive* MyPrim, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

