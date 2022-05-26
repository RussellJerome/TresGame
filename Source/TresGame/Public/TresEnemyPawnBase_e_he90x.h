#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawnBase_e_he90x.generated.h"

class ATresPlayerPawnBase;
class UTresSkeletalMeshComponent;

UCLASS(Abstract)
class ATresEnemyPawnBase_e_he90x : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDispCollMesh;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceStrongBodyDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxTargetMountOffTime;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* MyCollMesh;
    
    UPROPERTY()
    ATresPlayerPawnBase* m_Player;
    
public:
    ATresEnemyPawnBase_e_he90x();
    UFUNCTION(BlueprintCallable)
    static void OnReceiveRemoteEvent(FName inEventName);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool LineTraceMultiForMap(const FVector Start, const FVector End, TArray<FHitResult>& OutHits) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetOnMountain();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerOnMountain();
    
};

