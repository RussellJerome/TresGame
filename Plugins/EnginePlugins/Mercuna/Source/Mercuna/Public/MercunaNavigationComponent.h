#pragma once
#include "CoreMinimal.h"
#include "EMercunaMoveResult.h"
#include "Components/ActorComponent.h"
#include "MercunaNavigationConfiguration.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "MercunaNavigationComponent.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavigationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMercunaMoveComplete, FAIRequestID, RequestID, const TEnumAsByte<EMercunaMoveResult::Type>, Result);
    
    UPROPERTY(BlueprintAssignable)
    FMercunaMoveComplete OnMoveCompleted;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMercunaNavigationConfiguration Configuration;
    
    UPROPERTY(EditAnywhere)
    bool Pathfinding;
    
    UPROPERTY(EditAnywhere)
    bool DynamicAvoidance;
    
public:
    UMercunaNavigationComponent();
    UFUNCTION(BlueprintCallable)
    void TrackActor(AActor* Actor, float Distance, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceAgainst(AActor* Actor, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void MoveToLocation(const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    void MoveToActor(AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    void LookAt(AActor* Actor, float MaxPitch);
    
    UFUNCTION(BlueprintCallable)
    void GetPathInfo(bool& Valid, float& DistanceToEnd, FVector& NextPathPoint, bool& bIsFinalPoint);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance);
    
    UFUNCTION(BlueprintCallable)
    void Configure(const FMercunaNavigationConfiguration& NewConfiguration);
    
    UFUNCTION(BlueprintCallable)
    void ClearAvoidanceExclusions();
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo", Latent))
    void CheckReachable(FVector Point, bool& Success, UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CancelMovement();
    
    UFUNCTION(BlueprintCallable)
    void CancelLookAt();
    
};

