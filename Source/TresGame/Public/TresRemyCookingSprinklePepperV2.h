#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresRemyCookingBase.h"
#include "UObject/NoExportTypes.h"
#include "SprinklePepperV2InputType.h"
#include "SprinklePepperV2InputJudgementType.h"
#include "UObject/NoExportTypes.h"
#include "RemyCookingGameState.h"
#include "SprinklePepperV2InputTimingEvalution.h"
#include "SprinklePepperV2MainState.h"
#include "TresRemyCookingSprinklePepperV2.generated.h"

class ATresRemyPawnBase;
class AStaticMeshActor;
class USQEX_ParticleAttachDataAsset;
class UParticleSystem;
class AActor;

UCLASS()
class ATresRemyCookingSprinklePepperV2 : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> PepperMillPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> SaucepanStaticMeshActorRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> PanStaticMeshActorRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> BowlPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> EquipmentLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FRotator> EquipmentRotationRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<AStaticMeshActor>> ContensActorRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> ContensLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* PepperParticleSuccessAttachDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* PepperParticleGreatSuccessAttachDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    float PepperSpawningTimeSuccessRef;
    
    UPROPERTY(EditDefaultsOnly)
    float PepperSpawningTimeGreatSuccessRef;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* VaporParticleRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SaucepanVaporParticleLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector PanVaporParticleLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* GlitterParticleRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> GlitterParticleLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    float GlitterParticleSpawningWaitTimeRef;
    
    UPROPERTY(EditDefaultsOnly)
    SprinklePepperV2InputJudgementType InputJudgementTypeRef;
    
    UPROPERTY(EditDefaultsOnly)
    SprinklePepperV2InputType InitialInputTypeRef;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* InputGreatSuccessParticleAttachDataRef;
    
private:
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pPepperMillPawn;
    
    UPROPERTY(Transient)
    AActor* m_pEquipmentActor;
    
    UPROPERTY(Transient)
    AStaticMeshActor* m_pContentsActor;
    
public:
    ATresRemyCookingSprinklePepperV2();
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintPure)
    SprinklePepperV2MainState GetMainCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    SprinklePepperV2InputType GetInputType() const;
    
    UFUNCTION(BlueprintPure)
    SprinklePepperV2InputTimingEvalution GetInputTimingEvalution() const;
    
    UFUNCTION(BlueprintPure)
    float GetInputTimer() const;
    
    UFUNCTION(BlueprintPure)
    float GetInputGraceTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

