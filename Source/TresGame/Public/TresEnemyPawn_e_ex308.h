#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIBCoopPawnBase.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawn_e_ex308.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class USoundBase;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex308 : public ATresEnemyXIIIBCoopPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_WarpFadeInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RevengeVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bEnableRevengeVoice2D;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* MyPullCollisionComponent;
    
public:
    ATresEnemyPawn_e_ex308();
    UFUNCTION()
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(Exec)
    bool IsDuringWarpCutCooldown_Phase2();
    
    UFUNCTION(Exec)
    bool IsDuringPhantomBlitzCooldown();
    
    UFUNCTION(Exec)
    void DebugSetNumWarpCut(int32 Num);
    
    UFUNCTION(Exec)
    void DebugSetEnableDrawPullCollision(int32 Enable);
    
};

