#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresDisneyMagicPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresDisneyMagicPawnRalph.generated.h"

class USoundBase;
class AActor;
class ATresDisneyMagicActorRalphBlock;
class UTresSkeletalMeshComponent;
class UParticleSystem;

UCLASS()
class ATresDisneyMagicPawnRalph : public ATresDisneyMagicPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_RengaMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresDisneyMagicActorRalphBlock>> m_BlockAssets;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetFinishEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* m_SEAssetBlockCreateFail;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_FinishEnableDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_Param_FinishCut2CollCenter;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_Param_FinishCut2CollRiseCenter;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreAttack;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreBlockExp;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreBlockOne;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Param_ScoreKill;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_Param_ScoreChainRateList;
    
private:
    UPROPERTY()
    ATresDisneyMagicActorRalphBlock* m_pBlockActor;
    
    UPROPERTY()
    TArray<ATresDisneyMagicActorRalphBlock*> m_BlockList;
    
    UPROPERTY()
    TArray<ATresDisneyMagicActorRalphBlock*> m_FinishPunchBlockList;
    
    UPROPERTY()
    TArray<ATresDisneyMagicActorRalphBlock*> m_FinishVisibleOffBlockList;
    
    UPROPERTY()
    ATresDisneyMagicActorRalphBlock* m_pFinishTarget;
    
    UPROPERTY()
    ATresDisneyMagicActorRalphBlock* m_pFinishPunchBlock;
    
    UPROPERTY()
    AActor* m_pExpAttacker;
    
    UPROPERTY()
    AActor* m_pExpBreakBlockNew;
    
    UPROPERTY()
    AActor* m_pExpBreakBlockOld;
    
    UPROPERTY()
    AActor* m_pExpBreakNote;
    
public:
    ATresDisneyMagicPawnRalph();
    UFUNCTION(BlueprintCallable)
    void SpawnFirstRalphBlock();
    
    UFUNCTION(BlueprintCallable)
    void ResetFinishBlockVisible();
    
    UFUNCTION(BlueprintPure)
    AActor* GetExpBreakBlockOld() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetExpBreakBlockNew() const;
    
};

