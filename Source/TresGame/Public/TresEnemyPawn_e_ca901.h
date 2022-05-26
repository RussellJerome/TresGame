#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ca901.generated.h"

class ATresEnemyJointActor_e_ca901;
class ATresEnemy_e_ex071_ValidateTargetVolume;
class ASkeletalMeshActor;
class USoundBase;

UCLASS()
class ATresEnemyPawn_e_ca901 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyJointActor_e_ca901> m_JointActorAsset;
    
    UPROPERTY()
    ATresEnemyJointActor_e_ca901* m_pJointActor;
    
    UPROPERTY()
    TArray<ATresEnemy_e_ex071_ValidateTargetVolume*> m_pValidateVolumes;
    
public:
    UPROPERTY(EditInstanceOnly)
    ASkeletalMeshActor* m_ShipMeshActor;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_TentacleSummonsSoundData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PlayVoiceTime;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_RestraintJackSuccessSoundData;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_RestraintOtherSuccessSoundData;
    
    ATresEnemyPawn_e_ca901();
    UFUNCTION(BlueprintCallable)
    void KillAllTentacle();
    
    UFUNCTION()
    bool IsDuringWarp();
    
    UFUNCTION()
    int32 GetExistTentacleNum();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugAllSpawnTentacle();
    
};

