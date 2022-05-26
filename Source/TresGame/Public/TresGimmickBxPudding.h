#pragma once
#include "CoreMinimal.h"
#include "TresGimmickLauncher.h"
#include "Engine/EngineTypes.h"
#include "ETresBxPuddingType.h"
#include "TresGimmickBxPudding.generated.h"

class ASQEX_SplineActor;
class UTresAtkCollComponent;
class UPrimitiveComponent;
class USphereComponent;
class UParticleSystemComponent;
class UTresSplineMoverComponent;
class AActor;
class ATresCharPawnBase;
class ATresGimmickBxPuddingManager;
class UTresDebugArrowComponent;

UCLASS()
class ATresGimmickBxPudding : public ATresGimmickLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresAtkCollComponent* m_pEatAttackColl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* m_pEntryTrigger;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* m_pAreaJumpEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_NormalAnimIdleName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_CannibalAnimIdleName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_CannibalAnimStartName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_AnimMoveName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AtkCollOnLen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_AnimNormalLaunchName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_AnimSpecialLaunchName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<AActor> m_wpAreaJumpTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AreaJumpAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AreaJumpTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_DisableChangeFlags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresBxPuddingType m_FirstPuddingType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<ASQEX_SplineActor> m_wpSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_AreaJumpScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CannibalTimeMax;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    float m_CannibalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_EatAttachName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LandAnimDelayTimeForAreaJump;
    
    UPROPERTY(Transient)
    ETresBxPuddingType m_BxPuddingType;
    
    UPROPERTY(Transient)
    bool m_bMove;
    
    UPROPERTY(Transient)
    bool m_bAttackCollision;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATresCharPawnBase> m_wpHitPawn;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATresGimmickBxPuddingManager> m_wpPuddingManager;
    
    UPROPERTY(Transient)
    bool m_bNotifyStop;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UTresSplineMoverComponent> m_wpSplineMover;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresDebugArrowComponent* m_pDebugArrowComponent;
    
public:
    ATresGimmickBxPudding();
private:
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeed(const float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveLoop(const bool bLoop);
    
    UFUNCTION(BlueprintCallable)
    void SetLaunchHeight(const float Height);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMove(const bool bEnable, const bool bLoop, const float Speed);
    
    UFUNCTION()
    void OnEntryEndOverlap(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnEntryBeginOverlap(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void NextBxPuddingType();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNormalBxPudding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCannibalBxPudding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAreaJumpBxPudding() const;
    
private:
    UFUNCTION(BlueprintPure)
    float GetMoveSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetLaunchHeight() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActiveScore() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void EatPawn(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangedBxPuddingType();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ChangeBxPuddingType(const ETresBxPuddingType Type);
    
};

