#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ETresChrUniqueID.h"
#include "ETresEnemyUniqueID.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickHitComponentOnTresHitGimmickSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickHitComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickHitComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableHitInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_HitInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresChrUniqueID> m_ApplyHitChrUniqueIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresEnemyUniqueID> m_ApplyHitEnemyUniqueIDs;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<TSubclassOf<AActor>> m_ApplyHitClass;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickHitComponentOnTresHitGimmickSignature OnTresHitGimmick;
    
    UTresGimmickHitComponent();
protected:
    UFUNCTION()
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnTresHitGimmick(const FHitResult& HitInfo, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableHit(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void BP_ApplyHit(AActor* DamageCauser);
    
};

