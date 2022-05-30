#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "RemyFPSMode.h"
#include "RemyStickControlType.h"
#include "UObject/NoExportTypes.h"
#include "RemyShowFinishOperationUITiming.h"
#include "RemyCookingEvalution.h"
#include "RemyCookingGameState.h"
#include "RemyCookingEvaluationResult.h"
#include "TresRemyCookingBase.generated.h"

class UTresRemyTaskBase;
class UForceFeedbackEffect;
class UParticleSystem;
class ATresCameraEmitterLensEffect;
class ATresRemyPawnBase;

UCLASS(Abstract)
class ATresRemyCookingBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    RemyFPSMode FPSModeRef;
    
    UPROPERTY(EditDefaultsOnly)
    RemyStickControlType StickControlTypeRef;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* InputSuccessParticleRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector InputSuccessParticleOffsetRef;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* GasStoveFireEffectRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresCameraEmitterLensEffect>> SuccessLensEffectsRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraEmitterLensEffect> GreatSuccessLensEffectRef;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* GreatSuccessBGEffectRef;
    
    UPROPERTY(EditDefaultsOnly)
    float GreatSuccessBGFrontEffectAlphaRef;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* SuccessForceFeedbackEffectRef;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* GreatSuccessForceFeedbackEffectRef;
    
    UPROPERTY(EditDefaultsOnly)
    RemyShowFinishOperationUITiming ShowFinishOperationUITiming;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresRemyTaskBase> TaskClass;
    
    UPROPERTY()
    UTresRemyTaskBase* m_pTaskByPC;
    
protected:
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pHourglassPawn;
    
public:
    ATresRemyCookingBase();
    UFUNCTION(BlueprintCallable)
    void TT_PrintStringVector(const FString& Name, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    void TT_PrintStringInt(const FString& Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void TT_PrintStringFloat(const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintCallable)
    RemyStickControlType GetStickControlType();
    
    UFUNCTION(BlueprintPure)
    float GetRemainingTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetMouseY();
    
    UFUNCTION(BlueprintPure)
    float GetMouseX();
    
    UFUNCTION(BlueprintPure)
    float GetMaterialPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaterialAmount() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintPure)
    RemyCookingEvaluationResult GetEvaluationResult() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<RemyCookingEvalution> GetEvaluation() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<RemyCookingGameState> GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BIE_Tick(float DeltaSeconds);
    
};

