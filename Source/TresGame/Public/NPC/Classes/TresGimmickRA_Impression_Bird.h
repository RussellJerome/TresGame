#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresRaFollowActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresRaGimmickBird.h"
#include "ETresCommandKind.h"
#include "TresGimmickRA_Impression_Bird.generated.h"

class ATresCharPawnBase;
class UTresReactorComponent;
class USQEX_ParticleAttachDataAsset;
class AActor;

UCLASS()
class ATresGimmickRA_Impression_Bird : public ATresRaFollowActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdIdle2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdFlyLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdFlyLoopFast;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdFlyAway;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdLanding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdATIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdATIdleStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdATFlyAway;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdATFlyAwayStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdATFlyLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdATLanding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdATFlyLoopAround;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdATFlyLoopMove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_BirdATMatou;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_PCMatou;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform StopPoint_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform StopPoint_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RunDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EscapeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RunStateEscapeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EscapeRotationInterpolationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationZAdjust;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Flag_UseSplineSecondPoint: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Flag_DrawLookAtLoc: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Flag_RootRotSlerpFlyAway: 1;
    
    UPROPERTY(EditAnywhere)
    USQEX_ParticleAttachDataAsset* EffectDataAsset;
    
    UPROPERTY(EditAnywhere)
    int32 BirdEffectID;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCharPawnBase> LookAtAnimPawnBP;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> LookAtTargetBP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_LookAt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_LookAT_Approach;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_LookAT_Idle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_LookAT_IdleBreak;
    
private:
    UPROPERTY(Export)
    UTresReactorComponent* m_pReactor;
    
    UPROPERTY()
    ATresCharPawnBase* m_pLookAtAnimPawn;
    
    UPROPERTY()
    AActor* m_pLookAtActor;
    
    UPROPERTY()
    TArray<FTresRaGimmickBird> m_BirdList;
    
public:
    ATresGimmickRA_Impression_Bird();
    UFUNCTION(BlueprintCallable)
    void StartMission();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBirdFlyAway(bool bInFollowingPc);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBirdAround();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBirdApproach();
    
private:
    UFUNCTION()
    void OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFollowingPc() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecLanding();
    
    UFUNCTION(BlueprintCallable)
    void ExecIdle();
    
    UFUNCTION(BlueprintCallable)
    void ExecFlyLoopAround();
    
    UFUNCTION(BlueprintCallable)
    void ExecFlyLoop(bool bMove);
    
    UFUNCTION(BlueprintCallable)
    void ExecFlyAwayFromFollow();
    
    UFUNCTION(BlueprintCallable)
    void ExecFlyAway();
    
    UFUNCTION(BlueprintCallable)
    void ExecApproach();
    
};

