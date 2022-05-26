#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "ETresGumiShipClusterGeneratorShape.h"
#include "UObject/NoExportTypes.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipClusterGenerator.generated.h"

class UDataTable;
class UBoxComponent;
class UCapsuleComponent;
class UPrimitiveComponent;
class USphereComponent;
class UHierarchicalInstancedStaticMeshComponent;
class AActor;

UCLASS()
class TRESGAME_API ATresGumiShipClusterGenerator : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGumiShipClusterGeneratorShape GenShape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Hollow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGumiShipClusterGeneratorShape HollowShape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector HollowBoxExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Interval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RandomDistributionRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClusterScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RandomScaleOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClusterRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ClusterMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RandomPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RandomYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RandomRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndCullDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBodyInstance BodyInstance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* LotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LotteryMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LotteryMaxCount;
    
private:
    UPROPERTY(Export)
    UBoxComponent* GenBoxComponent;
    
    UPROPERTY(Export)
    UBoxComponent* HollowBoxComponent;
    
    UPROPERTY(Export)
    USphereComponent* GenSphereComponent;
    
    UPROPERTY(Export)
    USphereComponent* HollowSphereComponent;
    
    UPROPERTY(Export)
    UCapsuleComponent* GenCapsuleComponent;
    
    UPROPERTY(Export)
    UCapsuleComponent* HollowCapsuleComponent;
    
    UPROPERTY(Export)
    TArray<UHierarchicalInstancedStaticMeshComponent*> HISMComponents;
    
public:
    ATresGumiShipClusterGenerator();
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
    UFUNCTION()
    void OnHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
};

