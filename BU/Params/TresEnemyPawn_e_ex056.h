#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEx056EffectInfo.h"
#include "TresEnemyPawn_e_ex056.generated.h"

class ASQEX_SplineActor;
class UTresSkeletalMeshComponent;

UCLASS()
class ATresEnemyPawn_e_ex056 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_WallHitEffectGroupID;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableWatermelon;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEx056EffectInfo m_WatermelonDieEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bExcellent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_FlyMoveOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AppearFadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_SelfKillFadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DieFadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ExplosionTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_FallGravityScale;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASQEX_SplineActor> m_wpSplineActor;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UTresSkeletalMeshComponent> m_wpWatermelon;
    
    UPROPERTY(Transient)
    bool m_bForceSelfKill;
    
    UPROPERTY(Transient)
    bool m_bSelfKillMode;
    
    UPROPERTY(Transient)
    bool m_bRunSelfKill;
    
    UPROPERTY(Transient)
    float m_SelfKillDistance;
    
    UPROPERTY(Transient)
    bool m_bDangerMode;
    
    UPROPERTY(Transient)
    bool m_bWallHit;
    
    UPROPERTY(Transient)
    float m_MoveSpeed;
    
    UPROPERTY(Transient)
    float m_FluffyMoveSpeed;
    
    UPROPERTY(Transient)
    float m_FluffyMoveRange;
    
    UPROPERTY(Transient)
    FVector m_OldLocation;
    
    UPROPERTY(Transient)
    bool m_bNotifyStop;
    
    UPROPERTY(Transient)
    float m_FadeTime;
    
    UPROPERTY(Transient)
    float m_FadeElapsedTime;
    
    UPROPERTY(Transient)
    bool m_bDoFadeIn;
    
    UPROPERTY(Transient)
    bool m_bDoFadeOut;
    
    UPROPERTY(Transient)
    bool m_bExplisionAttack;
    
public:
    ATresEnemyPawn_e_ex056();
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* pActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelfKillEvent();
    
    UFUNCTION(BlueprintCallable)
    void RequestDanger();
    
    UFUNCTION(BlueprintCallable)
    void NotifyWallHit();
    
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintPure)
    bool IsForceSelfKill() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSelfKill();
    
    UFUNCTION(BlueprintCallable)
    void DebugRequestDie(const bool bSelfKill);
    
};

