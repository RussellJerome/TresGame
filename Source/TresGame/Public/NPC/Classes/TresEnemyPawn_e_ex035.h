#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ETresBadStatusType.h"
#include "TresEnemyPawn_e_ex035.generated.h"

class USceneComponent;
class ATresReserveActor_e_ex035;
class ATresCharPawnBase;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex035 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* AttachObject;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresReserveActor_e_ex035> ReserveActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGravityScale;
    
    UPROPERTY(EditAnywhere)
    uint32 m_BoolArray[10];
    
protected:
    UPROPERTY(EditAnywhere)
    bool m_bWallMode;
    
    UPROPERTY()
    ATresCharPawnBase* m_E_EX011Pawn;
    
    UPROPERTY(Export)
    USceneComponent* m_JumpLinkComp;
    
public:
    ATresEnemyPawn_e_ex035();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ValidateStep(ATresCharPawnBase* inOwnerPawn, FVector Velocity, float GravityScale, FText& outReason) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool TestSweepMulti(FHitResult& OutHit, FVector Start, FVector End) const;
    
    UFUNCTION(BlueprintCallable)
    void SetDestinationCandidate(TArray<AActor*> inDestinationArray);
    
    UFUNCTION(BlueprintPure)
    bool IsOnWall();
    
    UFUNCTION(BlueprintPure)
    bool IsOnTree();
    
    UFUNCTION(BlueprintPure)
    bool IsOnCarriage();
    
    UFUNCTION(BlueprintPure)
    bool IsNutsThrowAppear();
    
    UFUNCTION(BlueprintPure)
    bool IsCatchMe() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtLocation_e_ex035(FVector inOriginalLocation);
    
    UFUNCTION(BlueprintPure)
    float GetLookAtAlpha_e_ex035();
    
    UFUNCTION(BlueprintPure)
    ETresBadStatusType GetBadStatus_e_ex035() const;
    
};

