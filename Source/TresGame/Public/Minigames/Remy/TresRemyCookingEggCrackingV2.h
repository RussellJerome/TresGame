#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresRemyCookingBase.h"
#include "EggCrackingV2MainState.h"
#include "EggCrackingV2AnimationType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EggCrackingV2MaterialAmountIncreaseType.h"
#include "RemyCookingGameState.h"
#include "TresRemyCookingEggCrackingV2.generated.h"

class ATresRemyPawnBase;
class AStaticMeshActor;
class ATresCameraEmitterLensEffect;
class USQEX_ParticleAttachDataAsset;
class UForceFeedbackEffect;

UCLASS()
class ATresRemyCookingEggCrackingV2 : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EggCrackingV2AnimationType AnimationTypeRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> EggUpPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> EggDownPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> EggInnerPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> EggBowlPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> EggBowlStaticMeshActorRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector EggBowlStaticMeshActorLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator EggBowlStaticMeshActorRotationRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraEmitterLensEffect> TooManyLensEffectRef;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* TooManyEggParticleAttachDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* TooManyForceFeedbackEffectRef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxCrackTimes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EggCrackingV2MaterialAmountIncreaseType MaterialAmountIncreaseType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsObserveTooManyEvalution;
    
private:
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pEggUpPawn;
    
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pEggDownPawn;
    
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pEggInnerPawn;
    
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pEggBowlPawn;
    
    UPROPERTY(Transient)
    AStaticMeshActor* m_pEggBowlActor;
    
public:
    ATresRemyCookingEggCrackingV2();
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxCrackTimes() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintPure)
    EggCrackingV2MainState GetMainCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

