#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CuttingMainState.h"
#include "TresRemyCookingBase.h"
#include "CuttingReloadType.h"
#include "TresRemyCuttingFoodParam.h"
#include "UObject/NoExportTypes.h"
#include "RemyCookingGameState.h"
#include "RemyCookingCommand.h"
#include "TresRemyCookingCutting.generated.h"

class UParticleSystem;
class AStaticMeshActor;
class ATresRemyPawnBase;

UCLASS()
class ATresRemyCookingCutting : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ReloadSuccessParticleRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ReloadSuccessParticleOffsetRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> KnifePawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector FoodMassPawnLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> BowlStaticMeshActorRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector BowlStaticMeshActorLocationRef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LowFrameratePadBias;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LowFramerateMouseBias;
    
    UPROPERTY(EditDefaultsOnly)
    FVector FoodClusterParticleLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    float FoodClusterParticleSpawningStartTimeRef;
    
    UPROPERTY(EditDefaultsOnly)
    float FoodClusterParticleSpawningEndTimeRef;
    
    UPROPERTY(EditDefaultsOnly)
    float ReloadAnimSpeedNormalRef;
    
    UPROPERTY(EditDefaultsOnly)
    float ReloadAnimSpeedExcellentRef;
    
    UPROPERTY(EditDefaultsOnly)
    float ReloadExcellentEvalutionTimeRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresRemyCuttingFoodParam> FoodParamRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> FoodSliceParamNameRef;
    
    UPROPERTY(EditDefaultsOnly)
    CuttingReloadType ReloadType;
    
private:
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pKnifePawn;
    
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pFoodPawn;
    
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pPrevFoodPawn;
    
    UPROPERTY(Transient)
    AStaticMeshActor* m_pFoodMassActor;
    
    UPROPERTY(Transient)
    AStaticMeshActor* m_pBowlActor;
    
public:
    ATresRemyCookingCutting();
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintPure)
    float GetReloadTimeSpending() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetReloadTimes() const;
    
    UFUNCTION(BlueprintPure)
    float GetReloadJudgeTimer() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetReloadCounter() const;
    
    UFUNCTION(BlueprintPure)
    TArray<RemyCookingCommand> GetPlayerCommand() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintPure)
    CuttingMainState GetMainCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetFoodSliceNumList() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentSliceNum() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

